#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
	clrscr();
	double fact(int x);
	double i,n=0,x=0,sum=0;
	cout<<"\nEnter x:";
	cin>>x;
	cout<<"\nEnter value of n:";
	cin>>n;
	for(i=1;i<n;i++)
	{

		sum+=pow(x,i)/fact(i);
	}
	sum++;
	cout<<"\nSum of series:"<<sum;
	getch();
}
	double fact(int x)
	{
		double i,f=1;
		for(i=1;i<=x;i++)
			f*=i;
			return f;
}
