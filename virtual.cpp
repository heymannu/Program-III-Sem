#include<string.h>
#include<iostream>
using namespace std;

class student
{
	protected :
	int roll;
	string name;
	
	public:
	
	void get_roll(int x)
	{
		roll=x;
	}
	void put_roll()
	{
	cout<<"Roll is :"<<roll<<endl;
	}
	void get_name(string y)
	{
		name=y;
		}
		void put_name()
		{
		   cout<<"Name is :"<<name<<endl;
			}
	};

class mark : public virtual student
{
protected :
	int m1,m2;
	public:
	void get_marks(int a,int b)
	{
		m1=a;
		m2=b;

		}
	void put_marks()
	{
		cout<<"Marks are :" <<m1 <<" "<<m2<<endl;
		}
		
	};
	
class sport : public virtual student 
{
protected :
	char sp;
	public:
	void get_sports(char t)
	{
		sp=t;
         }                                             
	void put_sports()
	{
		cout<<"Sport is :"<<sp<<endl;
		}
		};
class total : public mark, public sport
{
	int sum;
	public:
	
		
		void display()
		{
					
		        sum=m1+m2;
		        put_name();
			cout<<"Sum is :"<<sum<<endl;
			put_roll();
			put_marks();
			put_sports();
			}
	};
	
	
int main()
{
	total T;
	T.get_name("Manmohan");
	T.get_roll(3);
	T.get_marks(40,50);
	T.get_sports('G');
	T.display();
	return 0;
	}
	
			 
	

