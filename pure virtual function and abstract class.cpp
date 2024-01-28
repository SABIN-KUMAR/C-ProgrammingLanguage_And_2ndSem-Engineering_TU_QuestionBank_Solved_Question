//pure virtual and abstract function
#include<iostream>
using namespace std;

class base
{
	protected:
		int l,b;
	public:
		dimension(int x, int y)
		{
			l=x;
			b=y;
		}
		//syntax:
		//virtual return_type function_name (args)=0;
		virtual void area()=0;
};

class square:public dimension
{
	public:
//		square(int x)::dimension(x,x)
//		{
//		   //		
//		}
		void area()
		{
			cout<<"Area:"<<l*b;
		}
};

class rectangle:public dimension
{
	public:
//		rectangle(int x, int y)::dimension(x,y)
//		{
//			//
//		}
		void area()
		{
			cout<<"Area:"<<l*b;
		}
};

int main()
{
	square s(10);
	rectangle r(10,20);
	dimension *dptr[]={&s,&r};
	
	for(int i=0;i<2;i++)
	{
		dptr[i]->area();
		
	}
	return 0;
}


























