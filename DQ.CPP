#include<iostream.h>
#include<conio.h>

const int SIZE=5;

class dqueue
{
	int DQ[SIZE];
	int front,rear;
	public:
	dqueue()
	{
		front=rear=-1;
	}
	void insertdq(int val); //rear
	void pushdq(int val); //front   -->
	int deletedq();  //front
	int popdq(); //rear  -->
	void displaydq();
};

void dqueue::insertdq(int val)
{
	if(rear>=SIZE-1)
	{
	      cout<<"Double Ended Queue is full"<<endl;
	}
	else
	{
		rear=rear+1;
		DQ[rear]=val;
		if(front==-1)
			front=0;
		cout<<"Element is added";
	}
}

void dqueue::pushdq(int val)
{
	if(front==0)
	{
	      cout<<"Double Ended Queue is full"<<endl;
	}
	else
	{
		if(front==-1)
			front=rear=SIZE-1;
		else
			front=front-1;
		DQ[front]=val;
		cout<<"Element is added";
	}
}

int dqueue::deletedq()
{
	int val=0;
	if(front==-1)
	{
		cout<<"DQ is empty"<<endl;
		val=-99;
	}
	else
	{
		val=DQ[front];
		if(front==rear)
			front=rear=-1;
		else
			front=front+1;
	}
	return val;
}

int dqueue::popdq()
{
	int val=0;
	if(rear==-1)
	{
		cout<<"DQ is empty"<<endl;
		val=-99;
	}
	else
	{
		val=DQ[rear];
		if(front==rear)
			front=rear=-1;
		else
			rear=rear-1;
	}
	return val;
}

void dqueue::displaydq()
{
	if(front==-1)
	{
		cout<<"DQ is empty"<<endl;
	}
	else
	{
		cout<<"DQ elements are:"<<endl;
		for(int i=front;i<=rear;i++)
		{
			cout<<DQ[i]<<" ";
		}
		cout<<endl;
	}

}

int main()
{
	int ch;
	dqueue ob;
	int no;
	do{
		cout<<"\n1.InsertDQ\n2.PushDQ\n3.DeleteDQ\n4.PopDQ\n5.Display\n0.Exit"<<endl;
		cout<<"Enter your choice:";
		cin>>ch;
		switch(ch)
		{
			case 1:
				cout<<"Enter value to insert at rear: ";
				cin>>no;
				ob.insertdq(no);
				break;
			case 2:
				cout<<"Enter value to push at front: ";
				cin>>no;
				ob.pushdq(no);
				break;
			case 3:
				no=ob.deletedq();
				if(no!=-99)
				{
					cout<<no<< " is deleted"<<endl;
				}
				break;
			case 4:
				no=ob.popdq();
				if(no!=-99)
				{
					cout<<no<<" is deleted"<<endl;
				}
				break;
			case 5:
				ob.displaydq();
				break;
			case 0:
				cout<<"Program Ended.."<<endl;
			default:
				cout<<"Enter Proper choice"<<endl;
		}
	}while(ch!=0);
	getch();
	return 0;
}