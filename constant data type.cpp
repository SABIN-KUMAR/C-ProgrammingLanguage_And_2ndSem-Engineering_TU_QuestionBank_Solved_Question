#include<iostream>
using namespace std;

class const1
{
	private:
		const int(data);
	public:
		const1 ():(data(0))
		{
			
		}
		const(int x):(data(x))
		{
			
		}
		void display();
		
};
void const1::display()
{
	cout<<data<<endl;
}

int main()
{
	const1 a(3),b;
	a.display();
	b.display();
	return 0;
}
