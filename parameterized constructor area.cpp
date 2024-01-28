#include<iostream>
using namespace std;

class area
{
	public:
		int l;
		int b;
		area(int length,int breadth)
		{
			l=length;
			b=breadth;
		}
		void display()
		{
			int Area;
			Area=l*b;
			cout<<"AREA OF RECTANGLE:"<<Area<<endl;
			
		}
};

int main()
{
	area a1(10,20);
	a1.display();
	return 0;
}
