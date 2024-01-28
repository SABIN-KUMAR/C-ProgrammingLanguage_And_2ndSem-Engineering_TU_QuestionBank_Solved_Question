#include<iostream>
using namespace std;

class base
{
	public:
		void display_data(char c)
		{
			cout<<"display_data() in base with char argument:"<<c<<endl;
		}
		void display_data(int i)
		{
			cout<<"display_data() in base with int argument:"<<i<<endl;
		}
};

class derived:public base
{
	public:
		void display_data()
		{
			cout<<"display_data() in derived without argument:"<<endl;
		}
};
int main()
{
	derived d1;
	d1.display_data();
//	d1.display_data('s');
//	d1.display_data(01);
	d1.base::display_data('a');
	d1.base::display_data(02);
	return 0;
	
}
