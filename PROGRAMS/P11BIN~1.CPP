#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int Arr[50], n, c, elem, i;
	int Bin_Search(int A[50], int s, int El);
	cout<<"\nEnter no. of elements: ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"\nEnter element "<<i<<" : "<<'\t';
		cin>>Arr[i];
	}
	cout<<"\nEnter element to be searched: ";
	cin>>elem;
	c=Bin_Search(Arr,n,elem);
	cout<<"\nGiven Array: "<<'\n';
	for(i=0;i<n;i++)
		cout<<Arr[i]<<'\t';
	cout<<"\nElement to be searched: "<<elem;
	if(c==-1)
		cout<<"\nSorry...Element not found!";
	else
		cout<<"\nElement found at position: "<<c;
		getch();
}
int Bin_Search(int A[50], int s, int El)
{
	int MID, LOW, HIGH;
	LOW=0;
	HIGH=s-1;
	while(LOW<=HIGH)
	{
		MID=(LOW+HIGH)/2;
		if(El<A[MID])
			HIGH=MID-1;
		else if(El>A[MID])
			LOW=MID+1;
		else
			return MID;
	}
	return -1;
}
