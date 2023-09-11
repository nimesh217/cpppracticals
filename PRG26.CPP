#include<iostream.h>
#include<conio.h>


class Base
{
	public:
	Base()
	{
		cout<<"Base Constructor"<<endl;
	}
       void show()
	{
		cout<<"Base class Show method called"<<endl;
	}
};

class Derived
{
	public:
	Derived()
	{
		cout<<"Derived Constructor"<<endl;
	}
	void show()
	{
		cout<<"Derived class Show method called"<<endl;
	}

};



void main()
{
	clrscr();
	Base *bptr;
	Base b;
//	b.show();
	bptr=&b;
	bptr->show();

	Derived d;
	bptr=(Base *)&d;
 //	d.show();
	((Derived *)bptr)->show();


	getch();

}