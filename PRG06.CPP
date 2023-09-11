#include<iostream.h>
#include<conio.h>

int main()
{
	clrscr();
	char name[20];
	char *str;
	cout<<"Enter Name";
	cin>>name;
	cout<<"Enter classname";
	cin>>str;

	cout<<name<<endl;
	cout<<str<<endl;
	int i=0;
	int count1=0,count2=0;
	while(name[i]!='\0')
	{
		count1++;
	   i++;
	}
	while(*str!='\0')
	{
	count2++;
	   str++;
	}
	cout<<"The length of "<<name<<" is "<<count1<<endl;
	cout<<"The length of "<<str<<" is "<<count2<<endl;
	getch();
	return 0;
}