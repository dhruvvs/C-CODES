#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int i,n,j,k=1,sum=0;
	cout<<"\enter limit:";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		k*=i;
		sum+=k;
	}
	cout<<"\ntotal sum:"<<sum;
	getch();
}