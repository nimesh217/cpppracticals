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
	int count=0;
	int choice;
	do
	{
		cout<<"\n1.Add Employee";
		cout<<"\n2.Display All";
		cout<<"\n3.Display One";
		cout<<"\n0.Exit"<<endl;
		cout<<"Choose Operation: ";
		cin>>choice;
		switch(choice)
		{
			case 1:
				e[count].input();
				count++;
				break;
			case 2:
				if(count==0)
				{
					cout<<"\nList is empty";
				}
				else{
					cout<<"The detials of employee are"<<endl;
					for(int i=0;i<count;i++)
					{
						e[i].display();
					}
				}
				break;
			case 3:
				int pos;
				cout<<"Enter position of element";
				cin>>pos;
				e[pos-1].display();
				break;
			case 0:
				cout<<"\nProgram is exiting"<<endl;
				break;
			default:

				cout<<"You have entered wrong choice";

		}

	}while(choice!=0);

	getch();
	return 0;
}