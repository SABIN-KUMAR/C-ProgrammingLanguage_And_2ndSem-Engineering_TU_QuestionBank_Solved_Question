#include<iostream>
using namespace std;

class base
{
	protected:
		char name[20];
	public:
		void read_data()
		{
			cout<<"Enter name in base:"<<endl;
			cin>>name;
		}
		void display_data()
		{
			cout<<"Name in the base:"<<name<<endl;
		}
};
class derived:public base
{
	private:
		char name[20];
	public:
		void read_data()
		{
			cout<<"Enter name in derived:"<<endl;
			cin>>name;
			
		}
		void display_data()
		{
			cout<<"Name in derived:"<<name<<endl;
		}
};

int main()
{
	derived d1;
	d1.base::read_data();
	d1.base::display_data();
	d1.derived::display_data();
//	system "pause";
	return 0;
}
