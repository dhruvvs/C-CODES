#include<iostream.h>
#include<conio.h>
struct student
{
	int rno;
	char name[20];
	int tmarks;
};
void main()
{
	clrscr();
	student s[100];
	int i,n,pos,s_rno;
	int search(student ts[],int pn,int prno);
	cout<<"\nEnter no.of students:";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"\nEnter student details:";
		cout<<"\nEnter roll number:";
		cin>>s[i].rno;
		cout<<"\nEnter name:";
		cin>>s[i].name;
		cout<<"\nEnter total marks:";
		cin>>s[i].tmarks;
	}
	cout<<"\nEnter the roll number to be searched:";
	cin>>s_rno;
	pos=search(s , n , s_rno);
	cout<<"\nAll Students details:";
	for(i=0;i<n;i++)
	{
		cout<<"\nRoll no."<<s[i].rno;
		cout<<"\nName:"<<s[i].name;
		cout<<"\nTotal marks:"<<s[i].tmarks;
	}
	if(pos==-1)
	cout<<"\nYour record not found";
	else
	cout<<"\nYour record details:";
	cout<<"\nRoll no:"<<s[pos].rno;
	cout<<"\nName:"<<s[pos].name;
	cout<<"\nTotal marks:"<<s[pos].tmarks;
	getch();
}
int search(student ts[],int pn,int prno)
{
	int i,a=-1;
	for(i=0;i<pn;i++)
	{
		if(ts[i].rno==prno)
		{
			a=i;
			break;
		}
	}
		return a;

}