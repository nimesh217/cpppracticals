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

        void display()
        {
            cout<<"The Complex number is "<< real<<" +i "<<img<<endl;
        }
//	Complex operator +(Complex c2);
	friend Complex operator+(Complex c1,Complex c2);
};

/*Complex Complex::operator +(Complex c2)
{
    Complex temp;
    temp.real=real+c2.real;
    temp.img=img+c2.img;
    return temp;
} */

Complex operator+(Complex c1,Complex c2)
{
	Complex temp;
	temp.real=c1.real+c2.real;
	temp.img=c1.img+c2.img;
	return temp;
}


int main()
{
    clrscr();
    Complex ob1(4);
    Complex ob2(5,3);
    Complex ob3;
    ob3=ob1+ob2; //ob1.operator+(ob2);
    ob1.display();
    ob2.display();
    ob3.display(); 
    getch();
    return 0;
}