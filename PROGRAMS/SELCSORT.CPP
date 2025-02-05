#include<iostream.h>
#include<conio.h>
struct stud
{
	int rno;
	char name[20];
};
void sel_sort(stud A[10],int N)
{
	int i,pass,min_ind;
	stud st;
	for(pass=0;pass<=N-2;pass++)
	{
		min_ind=pass;
		for(i=pass+1;i<=N-1;i++)
			if(A[min_ind].rno>A[i].rno)
				min_ind=i;
		if(min_ind!=pass)
		{
			st=A[min_ind];
			A[min_ind]=A[pass];
			A[pass]=st;
		}
	}
}
void main()
{
	clrscr();
	stud a[10];
	int n,i;
	cout<<"\nEnter range:";
	cin>>n;
	cout<<"\nEnter elements to be stored according to roll no(rno,name) respectively:\n";
	for(i=0;i<n;i++)
		cin>>a[i].rno>>a[i].name;
	cout<<"\nOriginal array of structure\n";
	for(i=0;i<n;i++)
		cout<<a[i].rno<<'\t'<<a[i].name<<'\n';
	sel_sort(a,n);
	cout<<"\nArray of structure after selection sort\n";
	for(i=0;i<n;i++)
		cout<<a[i].rno<<'\t'<<a[i].name<<'\n';
	getch();
}
