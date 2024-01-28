//function overloading in c++
#include<iostream>
using namespace std;
//function prototype
int max(int , int);//return type function_name(data type)
long max(long,long);
float max(float,float);
char max(char,char);

int main()
{
	int a=15,b=20;
	cout<<"Greatest is "<<max(a,b)<<endl;
	long l1=400000,l2=6000000;
	cout<<"Greatest is "<<max(l1,l2)<<endl;
	float f1=222.22,f2=33.333;
	cout<<"Greatest is "<<max(f1,f2)<<endl;
	char c1='s',c2='k';
	cout<<"Greatest is "<<max(c1,c2)<<endl;
	return 0;
	
}
int max(int a,int b)
{
	return (a>b?a:b);
} 
long max(long l1,long l2)
{
	return (l1>l2?l1:l2);
}
float max(float f1,float f2)
{
	return (f1>f2?f1:f2);
}
char max (char c1,char c2)
{
	return (c1>c2?c1:c2);
}

