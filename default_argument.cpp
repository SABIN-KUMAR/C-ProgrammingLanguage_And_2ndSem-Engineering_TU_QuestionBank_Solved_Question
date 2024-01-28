#include<iostream>
using namespace std;
//default argument in function
void marks_total(int m0,int m1=40,int m2=40,int m3=40);
int main()
{
	marks_total(55);
	marks_total(66,77);
	marks_total(75,85,92);
	return 0;
}
void marks_total(int m0,int m1,int m2,int m3)

{
	cout<<"Total marks="<<(m0+m1+m2+m3)<<endl;
}
