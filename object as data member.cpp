//object as data member
#include<iostream>
using namespace std;

class A
{
	private:
		int data;
	public:
		void get_data()
		{
			cout<<"Enter the data:";
		    cin>>data;
		}
		void display()
		{
			cout<<"Data is:"<<data<<endl;
		}
};
class B
{
	private:
		A a;
		int b;
	public:
		void get_data()
		{
		    a.get_data()
		    cin>>b;
		}
		void display()
		{
			a.display();
			cout<<b;
		}
};

int main()
{
	B b1;
	b1.get_data();
	b1.display();
	return 0;
}










