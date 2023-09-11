#include<iostream.h>
#include<conio.h>



class Space
{
    int x;
    int y;
    int z;

    public:
	Space()
	{
	    x=y=z=0;
	}
	Space(int,int, int);
	void changesign();
	void operator -(); //unary operator overloading using member function
	void display()
	{
	    cout<<"\nX= "<<x;
	    cout<<" Y= "<<y;
	    cout<<" Z= "<<z<<endl;
	}

};

//paramererize constructor
Space::Space(int a,int b, int c)
{
    x=a;
    y=b;
    z=c;
}
void Space::changesign()
{
	x=-x;
	y=-y;
	z=-z;
}

void Space::operator -()
{
       x=-x;
       y=-y;
       z=-z;
}

int main()
{
    clrscr();
    Space ob;
    Space ob1(10,-20,30);
    ob.display();
    ob1.display();
    //ob1.changesign();  //-ob1;
    -ob1;
    //ob1.x=-ob1.x;
    getch();
    ob1.display();
    getch();
    return 0;
}