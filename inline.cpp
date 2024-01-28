//inline.cpp
//example of inline function

#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
inline float deg_to_rad(float deg)
{
	return (deg*M_PI/180);
	
}
int main()
{
	float deg1,deg2;
	cout<<"Enter the angle in degree:";
	cin>>deg1;
	cout<<"Degree"<<deg1<<setw(25)<<"Radian"<<deg_to_rad(deg1)<<endl;
	cout<<"Enter another angle in degree:";
	cin>>deg2;
	cout<<"Degree"<<deg2<<setw(25)<<"Radian="<<deg_to_rad(deg2);
	return 0;
}
