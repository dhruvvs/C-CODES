#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int a[20],i,n,temp=0;
	cout<<"\nEnter n:";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"\nEnter array elements:";
		cin>>a[i];
	}
	for(i=0;i<n/2;i++)
	{
		temp=a[i];
		a[i]=a[n-i-1];
		a[n-i-1]=temp;
	}
	cout<<"\nReverse Array:";
	for(i=0;i<n;i++)
	{
	cout<<a[i]<<" ";
	}

	getch();
}