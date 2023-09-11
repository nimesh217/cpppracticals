#include<iostream.h>
#include<conio.h>

const int SIZE=10;

class stack
{
	int a[SIZE];
	int top;
	public:
		stack()
		{
			top=-1;
		}
		void push(int ele);
		int pop();
		int peep();
		void display();
};
void stack::push(int ele)
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

int stack::pop()
{
	int data;
	if(top==-1)
	{
		cout<<"\nStack is underflow"<<endl;
		data=-99;
	}
	else
	{
		 data=a[top];
		 top=top-1;
	}
	return data;
}

int stack::peep()
{
	if(top==-1)
		return -99;
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
	clrscr();
	stack ob;
	int no;
	char ch;
	do{
		cout<<"\nA.push"<<endl;
		cout<<"B.pop"<<endl;
		cout<<"C.Peep"<<endl;
		cout<<"D.Display"<<endl;
		cout<<"X.Exit"<<endl;
		cout<<"Enter your choice: ";
		cin>>ch;
		switch(ch)
		{
			case 'A':
				cout<<"Enter value to push";
				cin>>no;
				ob.push(no);
				break;
			case 'B':
				no=ob.pop();
				if(no==-99)
				{
				    cout<<"Stack is empty so you cannot delete any element"<<endl;
				}
				else
				{
					cout<<"Your deleted element is "<<no<<endl;
				}
				break;
			case 'C':
				no=ob.peep();
				if(no==-99)
					cout<<"Stack is empty so there is no top element exist"<<endl;
				else
					cout<<"The top element is "<<no<<endl;
				break;
			case 'D':
				ob.display();
				break;
			case 'X':
				cout<<"Program Exiting..."<<endl;
				break;

			default:
				cout<<"Wrong Choice"<<endl;
		}
	}while(ch!='X');
	return 0;
}















