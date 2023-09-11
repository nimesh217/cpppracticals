#include<iostream.h>
#include<conio.h>
#include<string.h>


class book
{
	private:
		char bname[20];
		float bprice;
	public:
		void getdata();
		void changebname(char nm[],float b);
		void printdata();
};

void book::getdata()
{
	cout<<"Enter book name";
	cin>>bname;
	cout<<"Enter book price";
	cin>>bprice;
}
void book::changebname(char nm[],float b)
{
	//bname=nm;
	strcpy(bname,nm);
	bprice=b;
}

void book::printdata()
{
	cout<<"The Book Name is "<<bname<<endl;
	cout<<"The Book Price is "<<bprice<<endl;
}

int main()
{
	clrscr();
	book b1;
	b1.getdata();
	b1.printdata();
	b1.changebname("Python",400);
	b1.printdata();
	getch();
	return 0;
}