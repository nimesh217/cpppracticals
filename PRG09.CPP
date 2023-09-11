#include<iostream.h>
#include<conio.h>

class Integer
{
	int m,n;
	public:
		//name is same as classname
		//called automatically when the object is created
		//constructor should be in public section
		//there is no return type in constructor (not even void)
		Integer()  //implicit->default
		{
			m=n=999;
			cout<<"Default Constructor called"<<endl;
		}
		Integer(int x)
		{
			cout<<"Parameterized constructor"<<endl;
			m=n=x;
		}
		Integer(int x,int y)
		{
			cout<<"2 Paramerized Constructor"<<endl;
			m=x;
			n=y;
		}
		Integer(Integer &ob)
		{
			cout<<"Copy COnstructor"<<endl;
			m=ob.m;
			n=ob.n;
		}
		void input();
		void display();
};

void Integer::input()
{
	cout<<"Enter value of M";
	cin>>m;
	cout<<"Enter value of N";
	cin>>n;
}

void Integer::display()
{
	cout<<"The value of M is "<<m<<" and N is "<<n<<endl;
}
int main()
{
	clrscr();
	Integer i1;    //default constructor
	i1.display();
	i1.input();     //50 60
	i1.display();
	Integer i4=i1;  //i4(i1)  //constructor called but not seen

       //	i4=i1; //i1 is assigned to i4
	i4.display();
	i4.input();
	i4.display();
	i1.display();

	Integer i2(300); //parameterized constructor -- Implicit call
	i2.display();
	Integer i3=Integer(10,20); //parameterized constructor -- Explicit call
	i3.display();
	getch();
	return 0;
}











