#include<iostream>
using namespace std;

class element
{
	private:
		int ar[5];
	public:
		void input()
		{
			cout<<"Enter the 5 element:"<<endl;
			cout<<"In the array form:"<<endl;
			for(int i=0;i<5;i++)
			{
				cin>>ar[i];
			}
		}
		void sum()
		{
			int s=0;
			for( int i=0;i<5;i++)
			{
				s=s+ar[i];
			}
			cout<<"Sum of Enter all 5 element="<<s<<endl;
			
		}
		void large()
		{
			int l=ar[0];
			for(int i=1;i<5;i++)
			{
				if(l<ar[i])
				{
					l=ar[i];
				}
			}
			cout<<"largest element:"<<l<<endl;
		}
};

int main()
{
	element l1;
	
	l1.input();
	l1.sum();
	l1.large();	
	return 0;
}













