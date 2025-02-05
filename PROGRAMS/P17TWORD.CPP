#include<iostream.h>
#include<fstream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
void main()
{
	clrscr();
	fstream file;
	file.open("m1.txt",ios::out);
	char ch,ln[80];
	cout<<"\nEnter any information [# to exit] :\n";
	do
	{
		ch=getchar();
		if(ch!='#');
			file.put(ch);
	}
	while(ch!='#');
	file.close();
	int l=0;
	file.open("m1.txt",ios::in);
	while(!file.eof())
	{
		file.getline(ln,80);
		if(ln[0]=='T'||ln[0]=='M')
			l++;
	}
	cout<<"\nNumber of lines starting with T or M are: "<<l;
	file.close();
}