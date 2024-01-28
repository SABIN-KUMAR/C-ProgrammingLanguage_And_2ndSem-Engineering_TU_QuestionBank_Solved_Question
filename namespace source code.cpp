#include<iostream>
using namespace std;
//namespace convert
//{
//	void volume(int &a)
//	{
//		a=a*100;
//		
//	}
//}
int main()
{
	int no;
	cout<<"Enter the meter:"<<endl;
	cin>>no;
	convert::volume(no);
	cout<<"The conversion is:"<<no<<endl;
	return 0;
}
