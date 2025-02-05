#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int i, j, n, fact=1, sum=0;
	cout<<"\nEnter any number:";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		fact*=i;
		sum+=fact;
	}
		cout<<"\nSum of the factorial series of first "<<n<<" terms: "<<sum;
		getch();
}