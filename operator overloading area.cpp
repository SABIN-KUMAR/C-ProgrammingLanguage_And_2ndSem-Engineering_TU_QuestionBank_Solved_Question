#include<iostream>
using namespace std;

int area(int);  //function area with int return type
double area(double , int);  //function area with double return type
long area(long , int , int);  //function area with long return type

int main()
{
	cout<<"Area of sqaure:"<<area(10)<<endl;
	cout<<"Area of rectangle:"<<area(10,20)<<endl;
	cout<<"Area of cuboid:"<<area(10,20,30)<<endl;
	return 0;
}

int area(int a)
{
	return (a*a);
}

double area(double x, int y)
{
	return (x*y);
}

long area(long l,int b,int h)
{
	return (2*(l*b+b*h+h*l));
}

