#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	cout<<"\nPattern of alphabets consisting of 5 rows:\n";
	for(int i=65;i<=69;i++)
	{
		for(int j=65;j<=i;j++)
			cout<<(char)j<<" ";
		cout<<endl;
	}
	getch();
}