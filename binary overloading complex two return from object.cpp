#include<iostream>
#include<iomanip>
using namespace std;

class complex
{
	private:
		float real;
		float imaginary;
	public:
		complex ()
		{
			//..........................
		}
		complex(float x,float y)
		{
			real=x;
			imaginary=y;
		}
		void display()
		{
			cout<<"real"<<setw(10)<<"imaginary"<<endl;
			cout<<real<<setw(10)<<imaginary<<endl;
			
		}
		void display_result()
		{
			cout<<"real and imaginary"<<real<<"+"<<imaginary<<endl;
		}
		friend complex operator +(complex c1,complex c2);
};

complex operator + (complex c1,complex c2)
{
	complex temp;
	temp.real=c1.real+c2.real;
	temp.imaginary=c1.imaginary+c2.imaginary;
	return temp;
	
} 
int main()
{
	complex c1,c2,c3;
	c1=complex(20,20);
	c2=complex(15,15);
	c1.display();
	c2.display();
	c3=c1+c2;
	c3.display();
	return 0;
}













