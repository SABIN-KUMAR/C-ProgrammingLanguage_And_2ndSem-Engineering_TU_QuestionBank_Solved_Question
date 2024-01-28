#include<iostream>
using namespace std;

class demo
{
	int static count;
	public:
		demo()
		{
			count++;
			cout<<"Object is Created....."<<count<<endl;
		}
		~demo()
		{
			cout<<"Object is destroyed......"<<count<<endl;
			count--;
		}
		
};
int demo::count;
int main()
{
	demo d1,d2,d3,d4;
	return 0;
}
