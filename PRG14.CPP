#include<iostream.h>
#include<conio.h>

class Demo
{

	int x;
	public:
		void getx(int a);
		void printx();
		friend void printx2(Demo);
};

void Demo::getx(int a)
{
	x=a;
}
void Demo::printx()
{
	cout<<"X is "<<x<<endl;
}

void printx2(Demo ob)
{
	cout<<"X is"<<ob.x<<endl;
}


int main()
{
	clrscr();
	Demo obj;
	obj.getx(100);
	obj.printx();
	printx2(obj); //called non-member function
	getch();
	return 0;
}





