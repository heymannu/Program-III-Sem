#include<iostream>
using namespace std;

class employee
{
public:
	int id;
	float salary;
	
	employee(int inpid)
	{
		id = inpid;
		salary= 5000;
		}
		employee(){}
		};
	class programmer : public employee
	{
	public:
		int languagecode;
		programmer(int inpid){
		id =inpid;
		languagecode=8;
		}
		
		void getdata(){
		cout<<id<<endl;
		}
		};
		
		int main()
		{
		employee tom(1),jerry(2);
		cout<<tom.salary<<endl;
		cout<<jerry.salary<<endl;
		
		programmer mannu(20);
		cout<<mannu.languagecode<<endl;
		cout<<mannu.id<<endl;
		mannu.getdata();
		return 0;
		}
	

