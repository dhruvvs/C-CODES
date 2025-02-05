#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr()
	int n,i,pr=0;
	cout<<"\nenter a number:";
	cin>>n;
	for(i=2;i<=n/2;i++)
	if(n%i=0)
	{
		pr=1;
	}
	if(pr==1)
	cout<<n<<'t'<<"is not a prime number:";
	else
	cout<<n<<'\t'<<"is a prime number:";
}