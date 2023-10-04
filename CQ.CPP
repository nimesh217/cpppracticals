#include<iostream.h>
#include<conio.h>

const SIZE=5;
class cqueue
{

	int Q[SIZE];
	int front,rear;
	public:
		cqueue()
		{
			front=rear=-1;
		}
		void insertcq(int val);
		int deletecq();
		void displaycq();
};

void cqueue::insertcq(int val)
{
	if(front==0 && rear==SIZE-1)
	{
	    cout<<"QUeue is overflow";
	}
	else if(rear==front-1)
	{
	     cout<<"QUeue is overflow";
	}
	else
	{
		if(rear==SIZE-1)
			rear=0;
		else
			rear=rear+1;
		Q[rear]=val;
		if(front==-1)
			front=0;
		cout<<val<<" is added"<<endl;
	}
}
int cqueue::deletecq()
{
	int val=0;
	if(front==-1)
	{
		cout<<"Queue is empty"<<endl;
		val=-99;
	}
	else
	{
		val=Q[front];
		if(front==rear)
			front=rear=-1;
		else if(front==SIZE-1)
			front=0;
		else
			front=front+1;
	}
	return val;
}
void cqueue::displaycq()
{
	if(front==-1)
	{
		cout<<"Queue is empty"<<endl;
	}
	else
	{
	cout<<"Queue elements are "<<endl;
		if(front<=rear)
		{
			for(int i=front;i<=rear;i++)
			{
				cout<<Q[i]<<" ";
			}
			cout<<endl;
		}
		else
		{
			for(int i=front;i<=SIZE-1;i++)
			{
				cout<<Q[i]<<" ";
			}
			for(i=0;i<=rear;i++)
			{
				cout<<Q[i]<<" ";
			}
			cout<<endl;
		}
	}
}

int main()
{
	clrscr();
	int ch;
	int no;
	cqueue ob;
	do{
		cout<<"\n1.Insert Queue\n2.Delete From Queue\n3.Display Queue\n0.Exit"<<endl;
		cout<<"Enter Your Choice: ";
		cin>>ch;
		switch(ch)
		{
			case 1:
				cout<<"Enter number";
				cin>>no;
				ob.insertcq(no);
				break;
			case 2:
				no=ob.deletecq();
				if(no==-99)
				{
					cout<<"Queue is empty";
				}
				else
				{
					cout<<no<<" is deleted";
				}
				break;
			case 3:
				ob.displaycq();
				break;
			case 0:
				cout<<"Exiting..."<<endl;
				break;
			default:
				cout<<"Wrong Choice"<<endl;

		}
	}while(ch!=0);
	getch();
	return 0;
}