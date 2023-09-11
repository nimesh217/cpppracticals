#include<iostream.h>
#include<conio.h>

class Base
{
	//private:
	 int no1,no2,x1;
	protected:
		int x;
	public:
	 int p;
	 void method1()
	 {
		cout<<"Base Method 1"<<endl;
	 }
	 void method2()
	 {
		cout<<"Base Method 2"<<endl;
	 }
	 void method3()
	 {
		cout<<"Base Method 3"<<endl;
	 }
};

class Derived : public Base
{
	//code
	private:
		int d1,d2;
	public:
		//int p;
		//void method1();
		//void method2();
		//void method3();
		int p2;
	void method4()
	{
		cout<<"Dervied Method 4"<<endl;
	}
	void method5()
	{
		cout<<"Derived Method 5"<<endl;
	}
};


int main()
{
	clrscr();
	Base b1;
	b1.p=100;
	//b1.no1=200; //not possile as private
	b1.method1();
	b1.method2();
	b1.method3();
	b1.x=999;
	b1.x1=1000;
	//child class object
	Derived d;
       //	d.d1=200; //invalid as d1 is private
	d.p2=300; //valid
	d.method4();
	d.method5();
	d.method1(); //base class method by using derived class object
	d.method2();
	d.method3();
	d.x=500;//can we write?
       //	d.x1=501; //private never go in derived class
	d.p=400;
	getch();
	return 0;
}
