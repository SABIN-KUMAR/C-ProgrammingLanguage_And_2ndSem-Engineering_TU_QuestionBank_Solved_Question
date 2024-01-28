#include<iostream>
using namespace std;

void swap(int &,int &);
int main()
{
	int x,y;
	x=10;
	y=20;
	cout<<"Before swap x="<<x<<endl;
	cout<<"Before swap y="<<y<<endl;
	swap(x,y);
	cout<<"After swap x="<<x<<endl;
	cout<<"After swap y="<<y<<endl;
	return 0;
}
void swap(int &a,int &b)
{
	int space;
	space=a;
	a=b;
	b=space;
}
