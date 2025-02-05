#include<iostream.h>
#include<conio.h>
void bubble(int A[10], int N);
void main()
{
	clrscr();
	int i, a[10], n;
	cout<<"\nEnter no. of elements: ";
	cin>>n;
	for(i=0;i<n;++i)
	{
		cout<<"\nEnter element "<<i<<" : ";
		cin>>a[i];
	}
	cout<<"\nOriginal Array:\n";
	for(i=0;i<n;++i)
		cout<<a[i]<<'\t';
	bubble(a,n);
	cout<<"\nArray after bubble sort:\n";
	for(i=0;i<n;++i)
		cout<<a[i]<<'\t';
}
void bubble(int A[10], int N)
{
	int LAST=N-1;
	int PASS;
	for(PASS=0;PASS<=N-2;++PASS)
	{
		int i, temp;
		int EXCHS=0;
		for(i=0;i<=LAST-1;++i)
			if(A[i]>A[i+1])
			{
				temp=A[i];
				A[i]=A[i+1];
				A[i+1]=temp;
				EXCHS=EXCHS+1;
			}
		if(EXCHS==0)
			return;
		else
			LAST=LAST-1;
	}
}