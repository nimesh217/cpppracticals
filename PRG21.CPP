#include<iostream.h>
#include<conio.h>

class vector
{
	int a,b;
	public:
	friend ostream& operator <<(ostream& out,vector& v);
	friend istream& operator >>(istream& in,vector& v);
};

ostream& operator <<(ostream &out,vector &v)
{
	out<<v.a;
	out<<v.b;
	return out;
}

istream& operator>>(istream &in,vector &v)
{
	in>>v.a;
	in>>v.b;
	return in;
}

void main()
{
	clrscr();
	vector ob;
	cout<<"Enter value of vector";
	cin>>ob;
	cout<<ob;

	getch();
}






