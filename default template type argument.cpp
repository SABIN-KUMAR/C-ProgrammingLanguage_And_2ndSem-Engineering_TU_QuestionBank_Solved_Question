#include<iostream>
using namespace std;
template<class T1=int>

class array
{
	public:
		T1 a;
};

int main()
{
	array<int>a1;
	array<float>a2;
	array<>a3;
}
