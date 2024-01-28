//Type conversion and promtion Rules in c++
//type conversion using static_cast operator

#include<iostream>
using namespace std;

int main()
{
	float quot;
	int num1=7,num2=9;
	quot=num1/num2;
	cout<<"Without using casting:quot="<<quot<<endl;
	//wrong result display
	quot=static_cast<float>(num1)/num2;
	cout<<"After the casting:quot="<<quot<<endl;//write result
	return 0;
}
