#include<iostream.h>
#include<conio.h>
void test();
void test(int);
//void test(float);
//void test(float);
//void test(int,float);


int main()
{
	clrscr();
	test();
	test(75.8);
  //	test(25,70.9);
 //	test(45.7);
	getch();
	return 0;
}

void test()
{
	cout<<"Test 1"<<endl;
}

void test(int var)
{
	cout<<"Test int: "<<var<<endl;
}
/*void test(float var)
{
	cout<<"Test double: "<<var<<endl;
}
/*

void test(int var1,double var2)
{
	cout<<"Test int"<<var1<<", double : "<<var2<<endl;
}

  */




