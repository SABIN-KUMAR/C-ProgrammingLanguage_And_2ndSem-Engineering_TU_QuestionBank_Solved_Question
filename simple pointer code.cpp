#include<iostream>
using namespace std;

int main()
{
	int a=4;
	int*b=&a;
	//&---(address of p)operator
	cout<<"\nThe address of a:"<<&a;
	cout<<"\nThe address of a:"<<b;
	
	
	//*----(value at) dereference operator
	
	cout<<"\nThe value at address b is "<<*b<<endl;
	return 0;
}
