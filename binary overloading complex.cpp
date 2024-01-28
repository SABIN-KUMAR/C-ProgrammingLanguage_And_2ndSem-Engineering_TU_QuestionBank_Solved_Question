//binary operator overloading in complex number.
#include<iostream>
#include<iomanip>
using namespace std;

class complex
{
	private:
		float real;
		float imag;
	public:
		complex()
		{
			
		}
		complex(float r1,float f1)
		{
			real=r1;
			imag=f1;
		}
		void display()
		{
			cout<<"Real"<<setw(10)<<"Imaginary"<<endl;
			cout<<real<<setw(10)<<imag<<endl;
		}
		void display1()
		{
			cout<<"Result:"<<real<<"+i"<<imag<<endl;
		}
		
		complex operator +(complex c);
};

complex complex ::operator +(complex c)
{
	complex temp;
	temp.real=c.real+real;
	temp.imag=c.imag+imag;
	return temp;
}

int main()
{
	complex c1,c2,c3;
	c1=complex(2.5,2.5);
	c2=complex(1.5,1.5);
	c3=c1+c2;
	c1.display();
	c2.display();
	cout<<"Addition of two complex number: "<<endl;
	c3.display1();
	return 0;	
}
