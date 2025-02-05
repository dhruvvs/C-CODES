#include<iostream.h>
#include<conio.h>
void main()
{
	int n=0, i, A[100], temp=0;
	clrscr();
	cout<<"\nEnter no. of elements: ";
	cin>>n;
	cout<<"\nEnter all array elements: ";
	for(i=0;i<n;++i)
	{
		cout<<"\nEnter the element-"<<i<<": ";
		cin>>A[i];
	}
	cout<<"\nGiven Array:\n";
	for(i=0;i<n;++i)
		cout<<A[i]<<'\t';
	for(i=0;i<n/2;++i)
	{
		temp=A[i];
		A[i]=A[n-i-1];
		A[n-i-1]=temp;
	}
	cout<<"\nReversed Array:\n";
	for(i=0;i<n;++i)
		cout<<A[i]<<'\t';
	getch();
}

