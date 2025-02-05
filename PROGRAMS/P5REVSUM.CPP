#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	long n, d, temp, rn=0, sum=0;
	cout<<"\nEnter a number: ";
	cin>>n;
	temp=n;
	while(temp>0)
	{
		d=temp%10;
		sum+=d;
		rn=rn*10+d;
		temp/=10;
	}
	cout<<"\nReverse of the number is: "<<rn;
	cout<<"\nSum of its digits: "<<sum;
	getch();
}