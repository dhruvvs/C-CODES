#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<stdio.h>
void main()
{
	clrscr();
	char ch;
	char line[80];
	ofstream fout;
	fout.open("m1.txt");
	cout<<"\nEnter Character:";
	do
	{
		ch=getchar();
		if(ch!='#')
		fout.put(ch);
	}
	while(ch!='#');
	fout.close();
	ifstream fin;
	fin.open("m1.txt");
	cout<<"\n\n Output from file:";
	int cnt=0;
	while(fin.eof()==0)
	{
		ch=fin.get();
		cout.put(ch);
		cnt++;
	}
	cout<<"\nline"<<cnt;
	fin.close();
	getch();
}