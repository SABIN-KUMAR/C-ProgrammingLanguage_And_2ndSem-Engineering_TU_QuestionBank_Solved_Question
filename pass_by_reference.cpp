
#include<iostream>
#include<iomanip>
using namespace std;


void square(int &a,int &b)//a is reference variable

{
	b*=b;
	a*=a;
}

int main()
{
	int x,y;
	cout<<"Enter the two number:";
	cin>>x>>y;
	square(x,y);
	cout<<"Square of two number "<<endl;
	cout<<"value of x and value of y"<<endl;
	cout<<x <<setw(20)<<y;
	return 0;
}
