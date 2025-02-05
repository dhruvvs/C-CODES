#include<iostream.h>
#include<string.h>
#include<conio.h>
class Clothing
{
	char Code[50];
	char Type[50];
	int Size;
	char Material[50];
	float Price;
	void Calc_Price()
	{
		if(strcmpi(Material, "COTTON")==0)
		{
			if(strcmpi(Type, "TROUSER")==0)
				Price=1500;
			else if(strcmpi(Type, "SHIRT")==0)
				Price=1200;
			else
				cout<<"\nInvalid Type. ";
		}
		else
		{
			if(strcmpi(Type, "TROUSER")==0)
				Price=1125;
			else if(strcmpi(Type, "SHIRT")==0)
				Price=900;
			else
				cout<<"\nInvalid Type. ";
		}
	}
		public:
		Clothing()
		{
			strcpy(Code, "NOT ASSIGNED");
			strcpy(Material, "NOT ASSIGNED");
			strcpy(Type, "NOT ASSIGNED");
			Size=0;
			Price=0;
		}
		void Enter()
		{
			cout<<"\nEnter Code: ";
			cin>>Code;
			cout<<"\nEnter Type: ";
			cin>>Type;
			cout<<"\nEnter Size: ";
			cin>>Size;
			cout<<"\nEnter Material: ";
			cin>>Material;
			Calc_Price();
		}
		void Show()
		{
			cout<<"\nCode: "<<Code;
			cout<<"\nType: "<<Type;
			cout<<"\nSize: "<<Size;
			cout<<"\nMaterial: "<<Material;
			cout<<"\nPrice: "<<Price;
		}
};
void main()
{
	clrscr();
	Clothing C1;
	C1.Enter();
	C1.Show();
	getch();
}
