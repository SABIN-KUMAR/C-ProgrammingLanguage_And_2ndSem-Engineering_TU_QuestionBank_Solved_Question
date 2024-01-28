#include<iostream>
using namespace std;

enum day
{
	sunday=1,monday,tuesday,wednesday,thursday,friday,saturday
};
int main()
{
	day day1,day2,day3;
	day1=thursday;
	day2=saturday;
	day3=sunday;
	cout<<"Value of day1:"<<day1<<endl;
	cout<<"Value of day1:"<<day2<<endl;
	cout<<"Value of day2:"<<day3<<endl;
	return 0;
}
