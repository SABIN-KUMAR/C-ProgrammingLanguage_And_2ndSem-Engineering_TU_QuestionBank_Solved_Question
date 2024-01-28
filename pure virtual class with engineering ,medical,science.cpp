#include<iostream>
using namespace std;

class student
{
	public:
		virtual void show()=0;//pure virtual function
		
};
class engineering:public student
{
	public:
		void show()
		{
			cout<<"I am engineering class."<<endl;
		}
};
class science:public student
{
	public:
		void show()
		{
			cout<<"I am science class."<<endl;
		}
};
class medical:public student
{
	public:
		void show()
		{
			cout<<"I am medical class."<<endl;
		}
};

int main()
{
	student *sptr;
	engineering e1;
	medical m1;
	science s1;
	sptr=&e1;
	sptr->show();
	sptr=&m1;
	sptr->show();
	sptr=&s1;
	sptr->show();
	return 0;
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
