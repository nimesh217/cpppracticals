#include<iostream.h>
#include<conio.h>
#include<string.h>


const int SIZE=100;

class stack
{
	char a[SIZE];
	int top;
	public:
		stack()
		{
			top=-1;
		}
		void push(char ele);
		char pop();
		char peep();
		void display();
};
void stack::push(char ele)
{
	if(top==SIZE-1)
	{
		cout<<"\nStack Overflow"<<endl;
	}
	else
	{
		top=top+1;
		a[top]=ele;
		cout<<"Element Pushed"<<endl;
	}
}

char stack::pop()
{
	char data;
	if(top==-1)
	{
		cout<<"\nStack is underflow"<<endl;
		data='\0';
	}
	else
	{
		 data=a[top];
		 top=top-1;
	}
	return data;
}

char stack::peep()
{
	if(top==-1)
		return '\0';
	else
		return a[top];
}

void stack::display()
{
	if(top==-1)
		cout<<"Stack is empty"<<endl;
	else
	{
		cout<<"\nStack elements are : ";
		for(int i=0;i<=top;i++)
		{
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
}


int main()
{
	char P[]="21+3*)";
	int len=strlen(P);
  //	clrscr();
	stack S;
	clrscr();
	for(int i=0;(i<len-1 && P[i]!=')');i++)
	{
		cout<<P[i]<<"-->";
		if(P[i]>='0' && P[i]<='9')
		{
			S.push(P[i]);
		}
		if(P[i]=='+' || P[i]=='-' || P[i]=='*' || P[i]=='/' || P[i]=='^')
		{
			cout<<"4.b";
			char X,Y;
			int A,B;

			X=S.pop();
			A=X-48;
			cout<<"A="<<A;
			Y=S.pop();
			B=Y-48;
			cout<<" B="<<B<<endl;
			int C;
			if(P[i]=='+')
			{
				C=A+B;
			}else if(P[i]=='-')
			{
				C=A-B;
			}else if(P[i]=='*')
			{
				C=A*B;
			}else if(P[i]=='/')
			{
				C=A/B;
			}
			char Z;
			Z=C+48;
			S.push(Z);
		}
	}
	S.display();
	getch();
	return 0;
}















