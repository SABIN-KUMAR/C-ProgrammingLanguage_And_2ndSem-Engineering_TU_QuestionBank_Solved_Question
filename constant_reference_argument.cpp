#include<iostream>
using namespace std;

void func(const int&x,int&y);
void display(int,int);
int main()
{
	int a=10,b=20;
	func(a,b);
	cout<<"03.constant value:"<<"a="<<a<<"and b="<<b<<endl;
	return 0;
}
void func(const int &x,int &y)
{
   cout<<"01.value:"<<x<<y<<endl;
   display(x,y);
}
void display(int a,int b)
{
	cout<<"02.Result="<<a<<b<<endl;
}
