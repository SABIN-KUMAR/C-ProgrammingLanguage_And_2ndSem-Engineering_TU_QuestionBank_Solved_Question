#include<iostream>
using namespace std;

class second;//forward declaration
class first
{
	private:
		int first_data;
	public:
		first(int x)
		{
			first_data=x;
		}
		friend int sum(first,second);
};

class second
{
	private:
		int second_data;
	public:
		second(int x)
		{
			second_data=x;
		}
		friend int sum(first,second);
};

int sum(first f,second s)
{
	return(f.first_data+s.second_data);
}

int main()
{
	first a(10);
	second b(20);
	cout<<"Display the sum of first and second:"<<sum(a,b)<<endl;
	return 0;
}
