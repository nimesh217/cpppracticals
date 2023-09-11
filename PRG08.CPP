
/*Write a c++ program having class Product with fields ProductId,
ProductName, ProductPrice, ProductQty
and methods inputProduct with all the values as a parameter
and displayProduct.
Create 3 object of Class Product
and display the result.*/
#include<iostream.h>
#include<conio.h>

class Product
{
	private:
	       int productId;
	       char *productName;
	       float productPrice;
	       int productQty;
	public:
		void inputProduct(int a,char *b,float c,int d);
		void displayProduct();
};

void Product::inputProduct(int id,char *nm,float pr,int q)
{
	productId=id;
	productName=nm; //strcpy
	productPrice=pr;
	productQty=q;
}

void Product::displayProduct()
{
	cout<<"The Product Details are as follows"<<endl;
	cout<<"Product ID: "<<productId<<endl;
	cout<<"Product Name: "<<productName<<endl;
	cout<<"Product Price: "<<productPrice<<endl;
	cout<<"Product Qty: "<<productQty<<endl;
}

int main()
{
	clrscr();
	Product p1,p2,p3;
	int i,q;
	char nm[50];
	float f;
	cout<<"Enter Product ID:";
	cin>>i;
	cout<<"Enter Product Name:";
	cin>>nm;
	cout<<"Enter Product Price";
	cin>>f;
	cout<<"Enter Product Quantity";
	cin>>q;

	p1.inputProduct(i,nm,f,q);
	p1.displayProduct();
	cout<<"Enter Product ID:";
	cin>>i;
	cout<<"Enter Product Name:";
	cin>>nm;
	cout<<"Enter Product Price";
	cin>>f;
	cout<<"Enter Product Quantity";
	cin>>q;

	p2.inputProduct(i,nm,f,q);
	p2.displayProduct();

	cout<<"Enter Product ID:";
	cin>>i;
	cout<<"Enter Product Name:";
	cin>>nm;
	cout<<"Enter Product Price";
	cin>>f;
	cout<<"Enter Product Quantity";
	cin>>q;

	p3.inputProduct(i,nm,f,q);
	p3.displayProduct();

	getch();
	return 0;
}







