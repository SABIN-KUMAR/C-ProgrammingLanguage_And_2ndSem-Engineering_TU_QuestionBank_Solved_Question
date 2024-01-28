#include<iostream>
using namespace std;

class demo
{
	private:
		int num;
		static int count;
	public:
		void get_data()
		{
			num=++count;
			
		}
		void display_number()
		{
			cout<<"Number:"<<num<<endl;
		}
		void display_count()
		{
			cout<<"Count:"<<count<<endl;
		}
};

int demo::count=10;

int main()
{
	demo d1;
	d1.get_data();
	d1.display_number();
	d1.display_count();
	return 0;
}
