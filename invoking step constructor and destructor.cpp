#include<iostream>
using namespace std;

class demo
{
	public:
		static int count;
		demo()
		{
			count++;
			cout<<"Object created."<<count<<endl;
		}
		~demo()
		{
			cout<<"Object destroyed."<<count<<endl;
			count--;
		}
};
int demo::count;


int main()
{
	demo d1,d2,d3,d4;
	return 0;
}
