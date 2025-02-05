#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int n_occur;
	int occur;
	char s_elem;
	char str[10],s_char;
	cout<<"\nEnter the string:";
	cin>>str;
	cout<<"\nEnter element to be searched:";
	cin>>s_char;
	occur=n_occur(s_char)
	cout<<"\nNumber of occurences of"<<s_char<<"in the string is:"<<occur;
	getch();
}
	int occur(char str;char s_elem)
{
	int i,n,cnt;
	for(i=0;str[i]!='\0';i++)
		{
			if(str[i]==s_elem)
			cnt++;
		}
	return cnt;
}