#include<iostream.h>
#include<conio.h>
class test
{
	int a;
	int b;
	public:
	test()
	{
		a=5;
		b=7;
	}
	test(int x,int y=15)
	{
		a=x;
		b=y;
	}
	test(test &t)
	{
		a=t.a;
		b=t.b;
	}
	void disp()
	{
		cout<<"\nOutput:"<<a<<"\t"<<b;
	}
};
void main()
{
	clrscr();
	test o1;
	test o2(2,3);
	o1=test(o2);
	test o3=test(10,20);
	test o4(o3);
	test o5(13);
	int x,y;
	cout<<"\n\nNew output \nOutput of default const.:";
	o1.disp();
	cout<<"\nOutput of parameterised const.:";
	o2.disp();
	cout<<"\nOutput of explicit cons.:";
	o3.disp();
	cout<<"\nOutput of copy const.:";
	o4.disp();
	cout<<"\nOutput of const. with default argument:";
	o5.disp();
	cout<<"\nEnter x:";
	cin>>x;
	cout<<"\nEnter y:";
	cin>>y;
	test o6(x,y);
	o6.disp();
	test o7=o6;
	o7.disp();
	getch();
}
