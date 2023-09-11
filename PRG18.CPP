#include<iostream.h>
#include<conio.h>

class Space
{
	int x;
	int y;
	int z;
	public:
		Space(){x=y=z=0;}
		Space(int a,int b,int c)
		{
			x=a;
			y=b;
			z=c;
		}
		void display()
		{
			cout<<"\nX= "<<x<<" Y= "<<y<<" Z= "<<z<<endl;
		}
		friend void operator -(Space &ob);
};


void operator -(Space &ob)
{
	ob.x=-ob.x;
	ob.y=-ob.y;
	ob.z=-ob.z;
}

int main()
{
	clrscr();
	Space s1,s2(10,-30,-50);
	s1.display();
	s2.display();
	-s2;  //operator-(s2);
	s2.display();
	getch();
	return 0;
}