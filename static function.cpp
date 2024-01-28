#include<iostream>
using namespace std;

class demo
{
	private:
		//static data member
		static int x;
		static int y;
	public:
		//static function
		static void display()
		{
			cout<<"The value of x:"<<x<<endl;
			cout<<"The value of y:"<<y<<endl;
		}
};
int demo::x=10;
int demo::y=20;

int main()
{
	demo d1;
	cout<<"Calling by using object.."<<endl;
	d1.display();
	cout<<"Calling by using class..."<<endl;
	demo::display();
	return 0;
}
