#include<iostream>
using namespace std;
namespace myname
{
	int x;
}
namespace myname
{
	int y;
}
int main()
{
	myname::x=4;
    myname::y=5;
	cout<<myname::x<<endl;
	cout<<myname::y<<endl;
	return 0;
}
