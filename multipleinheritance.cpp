#include<iostream>
using namespace std;

class A
{
	protected:
	int m;
	
	public:
	void get_m(int x)
	{
		m=x;}
		};
class B
{
	protected:
	int n;
	
	public:
	void get_n(int x)
	{
		n=x;}
		};
		
class C : public A, public B
{
int c;
	public:
	void add(){
	c= m+n;
	}
	
	void display(){
	cout<<"Value of m and n :"<<m<<"and"<<n<<endl;
	cout<<"Sum is "<<c<<endl;
	}
	};
	
	int main(){
	 C obj;
	 obj.get_m(3);
	 obj.get_n(6);
	 obj.add();
	 obj.display();
	 }
	 
	
