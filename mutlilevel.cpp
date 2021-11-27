#include<iostream>
using namespace std;

class student
{
 int roll ;
	
	public:
	void get_roll(int x)
	{
		roll=x;
	}
  	void put_roll()
	{
		cout<<"Roll is "<<roll<<endl;
	}
	
	};
	
class marks : public student
{
protected:
	int m,n;
	public:
	void get_marks(int x,int y)
	{
		m=x;
		n=y; 
		}
	void put_marks()
	{
		cout<<"Marksinfirst subject is "<<m<<endl;         
		cout<<"Marksinsecond subject is "<<n<<endl; 
		}
		};
class sum : public marks
{

	public:
	int sum1;
	
	void display()
	{
	sum1=m+n;
	cout<<"Total"<<" "<< sum1 <<endl;
		put_roll();
		put_marks();
		
		}
		};
		
		int main()
		{
			sum S;
			 S.get_roll(9);
			 S.get_marks(30,60);
			 S.display();
			 return 0;
			 }
			
			
			
			
			
			
			
			
			                                                                        
