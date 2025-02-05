#include<iostream.h>
#include<conio.h>
#include<string.h>
class clothing
{
	char code[50];
	int size;
	char type[50];
	char material[50];
	float price;
	void calc_price()
	{
		if (strcmp(material,"cotton")==0)
			{
				if(strcmp(type,"trouser")==0)
					price=1500;
					else
					price=1200;
			}
		else
		if(strcmp(type,"trouser"))
		price=1125;
		else
		price=900;
	}
	public:
	clothing()
	{
		strcpy(code,"not assigned");
		strcpy(type,"not assigned");
		strcpy(material,"not assigned");
		size=0,price=0;
	}
	void enter()
	{
		cout<<"\nEnter code:";
		cin>>code;
		cout<<"\nEnter type:";
		cin>>type;
		cout<<"\nEnter size:";
		cin>>size;
		cout<<"\nEnter material:";
		cin>>material;
		calc_price();
	}
	void show()
	{
		cout<<"\nYour code:"<<code;
		cout<<"\nYour type:"<<type;
		cout<<"\nYour size:"<<size;
		cout<<"\nYour material:"<<material;
		cout<<"\nYour price:"<<price;
	}
};
void main()
{
	clrscr();
	class clothing c;
	c.enter();
	c.show();
	getch();
}
