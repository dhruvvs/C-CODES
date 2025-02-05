#include<iostream.h>
#include<conio.h>
#include<stdio.h>
int linear_search(int A[10],int y,int rno)
{
	int i,flag=-1;
	for(i=0;i<y;i++)
		if(A[i]==rno)
		{
			flag=i;
			break;
		}
	return flag;
}
void main()
{
	clrscr();
	int pos,frn,i,n,B[10];
	cout<<"\nEnter no. of elements:"<<endl;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"\nEnter elements:";
		cin>>B[i];
	}
	cout<<"\nEnter element to be searched:"<<endl;
	cin>>frn;
	pos=linear_search(B,n,frn);
	if(pos==-1)
		cout<<"\nElement not found:";
	else
		cout<<endl<<frn<<"is at position:"<<pos+1<<endl;
	getch();
}