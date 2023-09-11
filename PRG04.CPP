#include<iostream.h>
#include<conio.h>

class product
{
	private:
		int pid;
		char pname[10];
		float pprice;
		int pqty;
	public:
		void inputdata();
		void displaydata();
};

void product::inputdata()
{
    cout<<"Enter product id";
    cin>>pid;
    cout<<"Enter Product Name:";
    cin>>pname;
    cout<<"Enter Product Price";
    cin>>pprice;
    cout<<"Enter Product Quantity";
    cin>>pqty;
}

void product::displaydata()
{
	cout<<"\n"<<pid<<" "<<pname<<" "<<pprice<<" "<<pqty<<endl;
}


int main()
{
	clrscr();

	product p1;
	p1.inputdata();
	p1.displaydata();
	getch();
	return 0;
}