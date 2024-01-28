#include<iostream>
using namespace std;

template<class T1,int size>
class array
{
	public:
		
	      T1 x[size];  //automatic array intialized
	
};
int main()
{
	array<int,7>a1;//array of 7 interger
	array<float,8>a2;//array of 8 floats
	array<char,20>b3;//strings of size 20

}
