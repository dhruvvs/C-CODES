#include<iostream.h>
void main()
{
	int i,j,n,k;
	cout<<"\enter n:";
	cin>>n;
	for(i=1;i<=5;i++)
	{
		k=i;
		for(j=1;j<=i;j++)
		cout<<k++<<" ";
		cout<<endl;
	}
}