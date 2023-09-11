#include<iostream.h>
#include<conio.h>
class Student
{
	int rno;
	char name[50];
	public:
		void getData();
		void putData();
};

void Student::getData()
{
	cout<<"Enter Roll No:";
	cin>>rno;
	cout<<"Enter Student Name:";
	cin>>name;
}

void Student::putData()
{
	cout<<"Student Roll no "<<rno<<" and Name is "<<name<<endl;
}

class Score : public Student
{

	protected:
		int sub1,sub2;
	public:
		void getMarks();
		void putMarks();
};

void Score::getMarks()
{
	cout<<"Enter Sub1 Marks";
	cin>>sub1;
	cout<<"Enter Sub2 Marks";
	cin>>sub2;
}

void Score::putMarks()
{
	cout<<"Sub1 : "<<sub1<<" and Sub2: "<<sub2<<endl;
}
class Result: public Score
{
	private:
		int total;
		float per;
	public:
	//getdata and putdata  student
	//getmarks and putmarks score
	void display();
};

void Result::display()
{
	total=sub1+sub2;
	per=total/2;
	cout<<"Total :"<<total<<" and Percentage is "<<per<<endl;
}


int main()
{

	clrscr();
	Result r;
	r.getData(); //Student
	r.getMarks(); //Score
	r.putData();	//student
	r.putMarks(); //score
	r.display(); //Result
	getch();
	return 0;
}
