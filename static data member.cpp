#include<iostream>
using namespace std;

class Test
{
	private:
		int number;
		static int count;
	public:
		void get_data()
		{
			number=++count;
			
		}
		void display_number()
		{
			cout<<"Number:"<<number<<endl;
			
		}
		void display_count()
		{
			cout<<"Count:"<<count<<endl;
		}
};
int Test::count=60;
int main()
{
	
	Test t1,t2,t3;
	t1.get_data();
	t2.get_data();
	t3.get_data();
	t1.display_count();
	t2.display_count();
	t3.display_count();
	t1.display_number();
	t2.display_number();
	t3.display_number();
	return 0;
}
