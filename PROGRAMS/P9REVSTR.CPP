#include<iostream.h>
#include<string.h>
#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	char str[80],c;
	int i, l=0;
	cout<<"\nEnter string: "; gets(str);
	cout<<"\nOriginal String: "<<str;
	l=strlen(str);
	cout<<"\nLength of the String: "<<l;
	for(i=0;i<l/2;++i)
	{
		c=str[i];
		str[i]=str[l-i-1];
		str[l-i-1]=c;
	}
	cout<<"\nReverse of the String: "<<str;
	getch();
}