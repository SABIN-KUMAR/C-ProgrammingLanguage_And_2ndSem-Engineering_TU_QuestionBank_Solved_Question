#include<iostream>
using namespace std;

//An example of reference variable

int main()
{
	int x=5;
	int y=x;//y is alias of x
	cout<<"x= "<<x<<"and y= "<<y<<endl;//same output
	y++;//y is reference of y
	cout<<"x= "<<x<<"and y= "<<y<<endl;//same output
	return 0;
	
}
