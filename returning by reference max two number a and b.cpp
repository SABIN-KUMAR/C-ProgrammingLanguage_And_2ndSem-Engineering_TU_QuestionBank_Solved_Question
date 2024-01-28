#include<iostream>
using namespace std;

int &max(int &,int &);
int main()
{
	int x;
	int y;
	cout<<"Enter the value of x and y:"<<endl;
	cin>>x>>y;
	cout<<"Before the condition of code excute."<<x<<"and"<<y<<endl;
	max(x,y)=-1;
	cout<<"After the returning value for max function."<<x<<"and"<<y<<endl;
	return 0;
}

int &max(int &a,int&b)
{
	if(a>b)
	return a;
	else
	return b;
}
