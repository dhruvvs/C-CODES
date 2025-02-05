#include<iostream.h>
#include<conio.h>
void bubble(int A[10],int N);
void main()
{
	clrscr();
	int i,a[10],n;
	cout<<"\nEnter no of elements:";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"\nEnter element"<<i<<":";
		cin>>a[i];
	}
	cout<<"\nOriginal array:\n";
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<'\t';
	}
	bubble(a,n);
	cout<<"\nArray after bubble sort:";
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<'\t';
	}
	getch();
}
void bubble(int A[10],int N)
{
	int last=N-1;
	int pass;
	for(pass=0;pass<=N-2;pass++)
	{
		int i,temp;
		int exchs=0;
		for(i=0;i<=last-1;i++)
		if(A[i]>A[i+1])
		{
			temp=A[i];
			A[i]=A[i+1];
			A[i+1]=temp;
			exchs=exchs+1;
		}
		if(exchs==0)
			return;
		else
			last=last-1;
		}
	}




