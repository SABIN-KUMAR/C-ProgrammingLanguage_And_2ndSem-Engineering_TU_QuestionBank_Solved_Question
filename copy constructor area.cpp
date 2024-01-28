#include<iostream>
using namespace std;

class demo
{
	public:
		int length;
		int breadth;
		demo(int l,int b)
		{
			length=l;
			breadth=b;
			
		}
		void area()
		{
			int A;
			A=length*breadth;
			cout<<"Area:"<<A<<endl;
			
		}
};

int main()
{
	demo d1(10,20);//invoked parameter for area
	d1.area();
	demo d2(d1);//initialized d2 the copy of d1 implicitly call
	d2.area();
	demo d3=d1;//initialized d3 the copy of d1 explicitly call
	d3.area();
	return 0;
}
