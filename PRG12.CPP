#include<iostream.h>
#include<conio.h>
class MyClass1
{
	protected:
		int m;
	public:
		void get_m(int);
		void put_m();
};


void MyClass1::get_m(int x)
{
	m=x;
}
void MyClass1::put_m()
{
	cout<<"M is "<<m;
}


class MyClass2
{
	protected:
		int n;
	public:
		void get_n(int);
		void put_n();
};


void MyClass2::get_n(int x)
{
	n=x;
}
void MyClass2::put_n()
{
	cout<<"N is "<<n;
}

class MyClass3: public MyClass1,public MyClass2
{
	public:
	void display();
};

void MyClass3::display()
{
	put_m();
	put_n();
	cout<<"MxN is"<<m*n<<endl;
}

int main()
{

	clrscr();
	MyClass3 ob;
	ob.get_m(10);
	ob.get_n(20);
	ob.display();
	getch();
	return 0;
}
