#include<iostream.h>
#include<conio.h>

class Employee
{
	int eno;
	char name[30];
	public:
	void input();
	void display();
};

void Employee::input()
{
	cout<<"Enter Employee No: ";
	cin>>eno;
	cout<<"Enter Employee Name:";
	cin>>name;
}

void Employee::display()
{
	cout<<"ENO : "<<eno<<endl<<"Ename: "<<name<<endl;
}

int main()
{
	clrscr();
	Employee e[5];
	for(int i=0;i<5;i++)
	{
		e[i].input();
	}

	cout<<"The detials of employee are"<<endl;
	for(i=0;i<5;i++)
	{
		e[i].display();
	}
	getch();
	return 0;
}