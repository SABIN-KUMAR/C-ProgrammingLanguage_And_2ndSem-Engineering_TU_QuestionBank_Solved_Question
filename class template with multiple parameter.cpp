#include<iostream>
using namespace std;

template<class T1,class T2>
class demo
{
	private:
		T1 a;
		T2 b;
	public:
		demo(T1 x,T2 y)
		{
			a=x;
			b=y;
		}
		void display()
		{
			cout<<"A:"<<a<<endl;
			cout<<"B:"<<b<<endl;
		}
};
int main()
{
	demo<int,float>d1(55,55.55);
	d1.display();
	demo<char,int>d2('S',55.55);
	d2.display();
	demo<char*,int>d3("sabin",55.55);
	d3.display();
	return 0;
}
