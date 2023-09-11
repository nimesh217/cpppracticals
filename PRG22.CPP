#include<conio.h>
#include<iostream.h>
#include<string.h>

class string
{
	private:
		char *name;
		int len;
	public:
		string()//default constructor
		{
			name=0; //set address to 0
			len=0;
		}
		string(char *a) //paramerized constructor
		{
			len=strlen(a);
			name=new char[len+1];
			strcpy(name,a);
		}
		string(string &s) //copy constructor
		{
			len=s.len;
			name=new char[len+1];
			strcpy(name,s.name);
		}
		void display()
		{
			cout<<name<<endl;
		}
		friend string operator + (string &s1,string &s2);
		friend int operator <=(string &s1,string &s2);

};

string operator +(string &s1,string &s2)
{
	string temp;
	temp.len=s1.len+s2.len;
	temp.name=new char[temp.len+1];
	strcpy(temp.name,s1.name);
	strcat(temp.name,s2.name);
	return temp;
}
int operator <=(string &s1,string &s2)
{
	int m=s1.len;
	int n=s2.len;
	if(m<=n)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int main()
{
	clrscr();
	string s1("Hello");
	string s2(" ,SYBCA");
	string s3(", KBS");
	s1.display();
	s2.display();
	s3.display();
	string t;
	t=s1+s2;
	t.display();
	string t2;
	t2=s1+s3;
	t2.display();
	if(t<=t2)
	{
		cout<<"t1 is smaller";
	}
	else
	{
		cout<<"t2 is snaller";
	}
	getch();

	return 0;
}



