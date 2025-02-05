#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{
	clrscr();
	int n_occur(char st[], char s_elem);
	char str[100], s_char;
	int occur;
	cout<<"\nEnter a string: ";
	gets(str);
	cout<<"\nEnter a character to be searched: ";
	cin>>s_char;
	occur=n_occur(str,s_char);
	cout<<"\nNo. of occurences of "<<s_char<<" in the string is: "<<occur;
	getch();
}
int n_occur(char st[], char s_elem)
{
	int i, cnt=0;
	for(i=0;st[i]!='\0';++i)
		if(st[i]==s_elem)
			cnt++;
	return cnt;
}
