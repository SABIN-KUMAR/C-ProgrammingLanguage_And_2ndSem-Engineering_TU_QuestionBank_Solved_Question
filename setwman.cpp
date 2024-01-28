//setwman.cpp
//demonstration setw manipulator

#include<iostream>
#include<iomanip>

using namespace std;
int main()
{
	long pop1=123456,pop2=987654,pop3=345678;
	cout<<setw(8)<<"LOCATION"<<setw(12)<<"POPULATION"<<endl;
	cout<<setw(8)<<"kathmandu"<<setw(12)<<pop1<<endl;
	cout<<setw(8)<<"Rajbiraj"<<setw(12)<<pop2<<endl;
	cout<<setw(8)<<"Biratnagar"<<setw(12)<<pop3<<endl;
	return 0;
		
}
