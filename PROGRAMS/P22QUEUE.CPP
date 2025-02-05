#include<iostream.h>
#include<conio.h>
void insert(int q[10],int n,int &front,int &rear,int x)
{
	if(rear==n-1)
		cout<<"\nQueue overflow!!! ";
	else
	{
		if(rear==-1)
		{
			rear=0;front=0;
		}
		else
		{
			rear++;
		}
		q[rear]=x;
	}
}
void del(int q[10],int n,int &front,int &rear,int x)
{
	if(front==-1)
	cout<<"\nQueue Underflow!";
	else
	{
		x=q[front];
		if(front==rear)
		{
			front=rear=-1;
		}
		else
			front++;
	}
}
void disp(int q[10],int n,int &front,int &rear)
{
	if(front==-1)
		cout<<"\nEmpty Queue!";
	else
		cout<<"\nQueue:\n";
		for(int i=front;i<=rear;i++)
			cout<<q[i]<<'\t';
}
void main()
{
	clrscr();
	int a[10],size=10,elem,front_a=-1,rear_a=-1,ch;
	do
	{
		cout<<"\n\n\nQueue Operations!!! ";
		cout<<"\n1.INSERT ";
		cout<<"\n2.DELETE ";
		cout<<"\n3.DISPLAY ";
		cout<<"\n4.EXIT ";
		cout<<"\n\nENTER CHOICE: ";
		cin>>ch;
		switch(ch)
		{
			case 1:
				cout<<"\nEnter Info: ";
				cin>>elem;
				insert(a,size,front_a,rear_a,elem);
				break;
			case 2:
				del(a,size,front_a,rear_a,elem);
				break;
			case 3:
				disp(a,size,front_a,rear_a);
				break;
			case 4:
				break;
			 }
	}while(ch<=3);
	getch();
}
