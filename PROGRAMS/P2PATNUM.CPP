#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	cout<<"\nPattern of numbers consisting of 5 rows:\n";
	for(int i=1;i<=5;i++)
	{
		int k=i;
		for(int j=1;j<=i;j++)
			cout<<k++<<" ";
		cout<<endl;
	}
	getch();
}

