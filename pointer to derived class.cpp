#include<iostream>
using namespace std;

class base
{
	public:
		int n;
		void display()
		{
			cout<<"First:"<<endl;
			cout<<"Base class:"<<n<<endl;
		}
};

class derived:public base
{
	public:
		int d;
		
		void display()
		{
			cout<<"Second:"<<endl;
			cout<<"Derived class:"<<d<<endl;
		}
};
int main()
{
	base *bptr;
	derived d1;
	bptr=&d1;
	bptr->n=10;
	bptr->display();
	
	derived *dptr;
	dptr=&d1;
	dptr->d=5;
	dptr->display();
	return 0;
}
