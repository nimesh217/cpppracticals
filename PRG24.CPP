#include<iostream.h>
#include<conio.h>

class Two; //temporary declaration

class One
{
	int a;
	char b;
	friend int multiply(One,Two);

	public:
	void getab();
	void displayab();
};

void One::getab()
{
	cout<<"Enter value of a and b";
	cin>>a>>b;
}

void One::displayab()
{
	cout<<"a = "<<a<<" and B = "<<b<<endl;
}

class Two
{
	int c;
	char d;
	public:
	void getcd();
	void displaycd();
	friend int multiply(One,Two);
};


void Two::getcd()
{
	cout<<"Enter value of c and d";
	cin>>c>>d;
}

void Two::displaycd()
{
	cout<<"c = "<<c<<" and d = "<<d<<endl;
}

int multiply(One x1,Two x2)
{
	cout<<"Friend Function called";

	return x1.a*x2.c;
}


int main()
{
	clrscr();
	One ob1;
	Two ob2;
	ob1.getab();
	ob2.getcd();

	ob1.displayab();
	ob2.displaycd();
	int result=multiply(ob1,ob2);
	cout<<"\nMultiplication of varibale of two different class is : "<<result<<endl;
	getch();
	return 0;
}