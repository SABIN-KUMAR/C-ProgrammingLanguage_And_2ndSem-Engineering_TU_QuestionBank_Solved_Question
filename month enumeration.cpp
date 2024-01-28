#include<iostream>
using namespace std;

enum month
{
	January=1, February, March, April, May, June, July, August, September, October, November, December
	
};
int main()
{
	month m1,m2,m3,m4;
	m1=December;
	m2=May;
	m3=August;
	m4=July;
	cout<<"Month m1:"<<m1<<endl;
	cout<<"Month m1:"<<m2<<endl;
	cout<<"Month m1:"<<m3<<endl;
	cout<<"Month m1:"<<m4<<endl;
	return 0;
}
