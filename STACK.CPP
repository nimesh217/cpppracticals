#include<iostream.h>
#include<conio.h>

const int MAX=5;
class Stack
{
	int s[MAX];
	int top;
	public:
		Stack()
		{
			top=-1;
		}
		void push(int item); //1
		int pop();
		int peep();
		void display(); //4
};

void Stack::push(int item)
{
	//step 1
	if(top==MAX-1)
	{
	      cout<<"Stack is overflow"<<endl;
	      return;
	}
	top=top+1;
	s[top]=item;
}

int Stack::pop()
{
	int data;
	if(top==-1)
	{
		cout<<"Stack is empty"<<endl;
		return -99;
	}
	else
	{
	   data=s[top];
	   top=top-1;
	}
	return data;
}
int Stack::peep()
{
	if(top==-1)
	{
		cout<<"Stack is empty"<<endl;
		return -99;
	}
	else
	{
		return s[top];
	}
}


void Stack::display()
{
	if(top==-1)
	{
		cout<<"Stack is empty";
	}
	else
	{
		 cout<<"Stack elements are:";
	      for(int i=0;i<=top;i++)
	      {
		cout<<s[i]<<" ";
	      }
	      cout<<endl;
	}

}

int main()
{
	clrscr();
	Stack obj;
	int ch;
	int val;
	do
	{
		cout<<"\n1. Push\n2. Pop\n3. Peep\n4. Display\n0. Exit"<<endl;
		cout<<"Enter your choice: ";
		cin>>ch;
		switch(ch)
		{
			case 1:
			       //	cout<<"case 1";
			       cout<<"Enter value to insert";
			       cin>>val;
			       obj.push(val);
				break;
			case 2:
			       //	cout<<"case 2";
			       int data;
			       data=obj.pop();
			       if(data==-99)
			       {
					cout<<"Element cannot be deleted"<<endl;
			       }
			       else
			       {
				cout<<"The deleted element is "<<data<<endl;
			       }
				break;
			case 3:
				//cout<<"case 3";
				data=obj.peep();
				if(data!=-99)
				{
					cout<<"he Top elememnt is "<<data<<endl;
				}
				break;
			case 4:
				//cout<<"case 4";
				obj.display();
				break;
			case 0:
				cout<<"program exiting...\nPress any to close program.";
				break;
			default:
				cout<<"Wrong choice"<<endl;
		}
	}while(ch!=0);
	getch();
	return 0;
}
