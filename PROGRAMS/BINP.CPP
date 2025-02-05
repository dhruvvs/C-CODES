#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<stdio.h>
class stud
{
	int rollno;
	char nm[20];
	char addr[30];
	public:
	void enter()
	{
		cout<<"\nEnter roll no:[0 to exit];";
		cin>>rollno;
		cout<<"\nEnter name:";
		gets(nm);
		cout<<"\nEnter address:";
		gets(addr);
	}
	void disp()
	{
		cout<<"\n"<<rollno<<'\t'<<nm<<'\t'<<addr<<'\n';
	}
	void read_det()
	{
		cout<<"\nEnter name:";
		gets(nm);
		cout<<"\nEnter address:";
		gets(addr);
	}
	int getrollno()
	{
		return rollno;
	}
};
	fstream file;
void search(int rno)
{
	stud sr;
	int flag=0;
	file.seekg(0);
	while(file.read((char*)&sr,sizeof (stud)))
	{
		if(rno==sr.getrollno())
		{
			cout<<"\nStudent details are as follows:"<<endl;
			sr.disp();
			cout<<"\n\n\nPress any key to continue.....";
			flag=1;
			getch();
			break;
		}
	}
		if(flag==0)
		cout<<"\nRoll no does not exist:";
		getch();
	}
void insert(stud sr)
{
	file.write((char*)&sr,sizeof(stud));
}
void del(int r)
{
	int fl=0;
	char conf='n';
	fstream ftmp("temp.dat",ios::in|ios::out|ios::binary);
	file.seekg(0);
	stud st;
	while(file.read((char*)&st,sizeof (stud)))
	{
		if(st.getrollno()==r)
		{
			st.disp();
			fl=1;
			cout<<"\nAre You Sure?[Y/N]:";
			cin>>conf;
			if(conf=='n')
			ftmp.write((char*)&st,sizeof(stud));
		}
		else
		ftmp.write((char*)&st,sizeof (stud));
	}
	if(fl==0)
	cout<<"\nRecord doesnot exist\n";
	file.close();
	ftmp.close();
	remove("student.dat");
	rename("temp.dat","student.dat");
}
void modify(int rno)
{
	stud sr;
	int ptr=0;
	int flag=0;
	file.seekg(0);
	while(file.read((char*)&sr,sizeof (stud)))
	{
		if(rno==sr.getrollno())
		{
			cout<<"\nStudent details are as follows:"<<endl;
			ptr=file.tellg();
			sr.disp();
			cout<<"\n\n\nPress any ey to continue.....";
			flag=1;
			sr.read_det();
			file.seekg(ptr-sizeof (stud));
			file.write((char*)&sr,sizeof (stud));
			getch();
			break;
		}
	}
	if(flag==0)
	{
		cout<<"\n\nRoll no doesnot exist:";
		getch();
	}
}
void disp()
{
	stud st;
	file.seekg(0);
	while(file.read((char*)&st,sizeof (stud)))
	{
		file.read((char*)&st,sizeof (stud));
		st.disp();
	}
}
stud strec;
int choice;
void main()
{
	int rn;
	file.open("student.dat",ios::ate|ios::in|ios::out|ios::binary);
	do
	{
		clrscr();
		file.clear();
		cout<<"\n\n\nMain Menu:"<<endl;
		cout<<"\n1.Add Record:"<<endl;
		cout<<"\n2.Search:"<<endl;
		cout<<"\n3.Delete:"<<endl;
		cout<<"\n4.Modify:"<<endl;
		cout<<"\n5.Display:"<<endl;
		cout<<"\n6.Exit:"<<endl;
		cout<<"\nEnter Choice(1-50):";
		cin>>choice;
		switch(choice)
		{
			case 1:
			cout<<"\nEnter student's details:"<<endl;
			file.clear();
			strec.enter();
			insert(strec);
			break;
			case 2:
			cout<<"\nEnter roll no to be searched:";
			cin>>rn;
			file.clear();
			search(rn);
			break;
			case 3:
			cout<<"\nEnter roll no to be deleted:";
			cin>>rn;
			del(rn);
			file.open("student.dat",ios::ate|ios::in|ios::out|ios::binary);
			break;
			case 4:
			cout<<"\nEnter roll no to be modified:";
			cin>>rn;
			file.clear();
			modify(rn);
			break;
			case 5:
			disp();
			getch();
		}
	}
	while(choice>=1&&choice<=5);
}
