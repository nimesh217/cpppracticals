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
		for(int i=top;i>=0;i--)
		{
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
}


int main()
{
	clrscr();
	char Q[]="(((A-B)+C)+((D*E)/F))"; //  ++-ABC/*DEF
	int len=strlen(Q);
	cout<<Q;
	stack S; //operators
	stack P; //result
	S.push(')');
	for(int i=len-1;i>=0;i--)
	{
		if((Q[i]>='A' && Q[i]<='Z') || (Q[i]>='a' && Q[i]<='z'))
		{
			P.push(Q[i]);
		}

		if(Q[i]==')')
		{
			S.push(Q[i]);
		}
		if(Q[i]=='+' || Q[i]=='-' || Q[i]=='*' || Q[i]=='/'|| Q[i]=='^')
		{
			//5.a
		       //	char l=S.peep();//*
			/*if(Q[i]==l)      here we need to set priority ^=3, * /=2, + - =1
			{

			}  */
			//5.b
			S.push(Q[i]);
		       //	cout<<Q[i];
		}

		if(Q[i]=='(')
		{
			char x;
			x=S.pop();
			P.push(x);
			S.pop();//)
		}
	}

	P.display();
	getch();
	return 0;
}















