#include<iostream>
using namespace std;

 class Student{
	
	char name[20];
	int roll_no;
	
	public:
	void setname(void);
	void getname(void);
	
	};
	
	void Student :: setname(void)
	{
		cout<<"Enter the name of the student : "<<endl;
		cin>>name;
		cout<<"Enter the roll no. : "<<endl;
		cin>>roll_no;
		
		}
		
	void Student :: getname(void)
	{
		cout<<"Name is : "<<name<<"Roll No. :"<<roll_no<<endl;
		}
		
	int main()
	{
		 Student s[5];
		 int n;
		 cout<<"Enter no. of students"<<endl;
		 cin>>n;
		if(n>=1){
		for(int i=0;i<n;i++)
		{
			s[i].setname();
			
			
		}
		for(int i=0;i<=n;i++)
		{
			s[i].getname();
			
			
		}
		}
		
	return 0;
	} 
