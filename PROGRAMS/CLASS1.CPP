#include<iostream.h>
#include<conio.h>
class testmatch
{
	int testcode;
	char description[50];
	int noofcandidates;
	int centrereqd;
	int calculatecntr();
	public:
	void getdata();
	void putdata();
};
void testmatch::getdata()
{
	cout<<"\nEnter details:";
	cout<<"\nEnter testcode:";
	cin>>testcode;
	cout<<"\nEnter description:";
	cin>>description;
	cout<<"\nEnter no. of candidates:";
	cin>>noofcandidates;
}
void testmatch::putdata()
{
	centrereqd=calculatecntr();
	cout<<"\nYour Details:";
	cout<<"\nYour testcode:"<<testcode;
	cout<<"\nYour description:"<<description;
	cout<<"\nEntered no. of candidates:"<<noofcandidates;
	cout<<"\nYour no. of centres:"<<centrereqd;
}
int testmatch::calculatecntr()
{
	int m;
	m=(noofcandidates/100+1);
	return m;
}
void main()
{
	clrscr();
	testmatch t;
	t.getdata();
	t.putdata();
	getch();
}