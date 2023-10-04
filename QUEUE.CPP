#include<iostream.h>
#include<conio.h>

const SIZE=5;
class queue
{

	int Q[SIZE];
	int front,rear;
	public:
		queue()
		{
			front=rear=-1;
		}
		void insertq(int val);
		int deleteq();
		void displayq();
};

void queue::insertq(int val)
{
	if(rear==SIZE-1)
	{
	    cout<<"QUeue is overflow";
	}
	else
	{
		rear=rear+1;
		Q[rear]=val;
		if(front==-1)
			front=0;
		cout<<val<<" is added"<<endl;
	}
}
int queue::deleteq()
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
		else
			front=front+1;
	}
	return val;
}
void queue::displayq()
{
	if(front==-1)
	{
		cout<<"Queue is empty"<<endl;
	}
	else
	{
	cout<<"Queue elements are "<<endl;
	for(int i=front;i<=rear;i++)
	{
		cout<<Q[i]<<" ";
	}
	cout<<endl;
	}
}

int main()
{
	clrscr();
	int ch;
	int no;
	queue ob;
	do{
		cout<<"\n1.Insert Queue\n2.Delete From Queue\n3.Display Queue\n0.Exit"<<endl;
		cout<<"Enter Your Choice: ";
		cin>>ch;
		switch(ch)
		{
			case 1:
				cout<<"Enter number";
				cin>>no;
				ob.insertq(no);
				break;
			case 2:
				no=ob.deleteq();
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
				ob.displayq();
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