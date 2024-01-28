#include<iostream>
using namespace std;

class demo
{
	public:
		void display_1();
		inline void display_2();
		
};
void demo::display_1()
{
	cout<<"01.Checking flow of execution."<<endl;
}
inline void demo::display_2()
{
	cout<<"02.Checking flow of execution."<<endl;
}

int main()
{
	demo d1,d2;
	d1.display_1();
	d2.display_2();
	return 0;
}
