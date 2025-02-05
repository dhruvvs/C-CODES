#include<iostream.h>
#include<conio.h>
void main()
{
		clrscr();
		int x;
		int fact(int n1);
		cout<<"\nEnter any number (between 0 to 10):";
		cin>>x;
		cout<<"\n Factorial value of "<<x<<" is: "<<fact(x);
		getch();
}
int fact(int n1)
{
		if(n1==0)
 	  		return 1;
  		else
   			return(n1*fact(n1-1));
}
