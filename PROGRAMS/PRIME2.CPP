#include<iostream.h>
#include<conio.h>
int isprime(int X);
void main()
{
	clrscr();
	int i;
	cout<<"\nPrime nos are:"<<endl<<2<<'\t';
	for(i=3;i<=100;i++)
		if(isprime(i))
		cout<<i<<'\t';
	getch();
}
int isprime(int X)
{
	int i,pr=1;
	for(i=2;i<=X/2;i++)
		if(X%i==0)
		{
			pr=0;
			break;
		}
	return(pr);
}