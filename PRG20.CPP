#include<iostream.h>
#include<conio.h>

class Complex
{
    private:
	int real,img;
    public:
	Complex()
	{
	    real=img=0;
	}
	Complex(int x)
	{
	    real=img=x;
	}
	Complex(int x,int y)
	{
	    real=x;
	    img=y;
	}
	void getdata(int a,int b);

	void display()
	{
	    cout<<"The Complex number is "<< real<<" +i "<<img<<endl;
	}
	void operator ++();
	friend void operator --(Complex &c);
};
void Complex::getdata(int a,int b)
{
	real=a;
	img=b;
}

void Complex::operator ++()
{
       real++;
       img++;
}

void operator --(Complex &c)
{
       c.real--;
       c.img--;
}

int main()
{
    clrscr();
    Complex ob;
    ob.getdata(10,15);
    ob.display();
    ob++;
    ob.display();
    ++ob;
    ob.display();
    ob--;
    ob.display();
    --ob;
    ob.display();
    getch();
    return 0;
}