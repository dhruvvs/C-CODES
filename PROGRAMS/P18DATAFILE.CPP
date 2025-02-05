#include<iostream.h>
#include<fstream.h>
#include<conio.h>
#include<stdio.h>
void main()
{
	clrscr();
	char ch;
	char line[80];
	ofstream fout("m1.txt");    //Open using Constructor
	fout.open("m1.txt");        //Open file for write mode using open function
	cout<<"\nEnter Character: ";
	do
	{
		ch=getchar();            //Enter character from user
		if(ch!='#')
			fout.put(ch);         //write character to the file
	}
	while(ch!='#');
	fout.close();               //Close file
	//Reading from File
	ifstream fin;
	fin.open("m1.txt");         //Open File for input mode
	cout<<"\n\nOutput from file. ";
	int cnt=0;
	while(fin.eof()==0)         //eof() returns nonzero for end of file
	{                           //returns 0 for not end of file
		ch=fin.get();            //Reading character from file
		fin.getline(line,35);    //Reading Characters from file
		cout.put(ch);            //Displaying Character
		cnt++;
	}
	cout<<"\nLines: "<<cnt;
	fin.close();                //Close File
}