#include<iostream>
using namespace std;

template<class T>
T area(T length,T breadth)
{
	return(length*breadth);
}

int main()
{
	int l1=20,b1=10;
	cout<<"Area="<<area(l1,b1)<<endl;
	float l2=2.5,b2=2.0;
	cout<<"Area="<<area(l2,b2)<<endl;
	return 0;
}
