#include<iostream.h>
#include<conio.h>

//class declaration
class student
{
	private:
		int rno;
		char name[10];
		int age;
	public:
        void input();
        void print();

};

//function definitions
//scope resolution operator (2 colon )
    void student::input()
	{
		cout<<"Enter roll no: ";
		cin>>rno;
		cout<<"Enter name: ";
		cin>>name;
		cout<<"Enter age: ";
		cin>>age;
	}
	void student::print()
	{
		cout<<"\nThe student details are as follows";
		cout<<"\nRoll NO:- "<<rno<<endl;
		cout<<"Name :- "<<name<<endl;
		cout<<"Age :- "<<age<<endl;
	}



int main()
{
	clrscr();

	student s1;
	s1.input();
	s1.print();
	//s1.rno=10;
	getch();
	return 0;
}