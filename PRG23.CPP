#include<conio.h>
#include<iostream.h>
#include<string.h>

class item
{
	private:
		int ino;
		char iname[20];
	public:
	void getdata();
	void display();
};

void item::getdata()
{
	cout<<"Enter item code";
	cin>>ino;
	cout<<"Enter Item Name";
	cin>>iname;
}

void item::display()
{
	cout<<"Item code :"<<ino<<" and Item Name "<<iname<<endl;
}


int main()
{
	clrscr();
	item i1,i2;
	item *ptr;
	ptr=&i1;
	ptr->getdata();
	ptr->display();

	i2.getdata();
	i2.display();
	getch();

	return 0;
}



