#include<iostream>
#include<iomanip>
using namespace std;

class complex
{
	private:
		int real,imag;
		friend complex add_complex(complex , complex);
	public:
		void get_data()
		{
			cout<<"Enter the data for complex in real and imaginary:"<<endl;
			cin>>real>>imag;
		}
		void display_complex()
		{
			cout<<"Real"<<setw(10)<<"Imaginary"<<endl;
			cout<<real<<setw(10)<<imag<<endl;
			
		}
		void display_calculation()
		{
			cout<<real<<"+i"<<imag<<endl;
			
		}
};
complex add_complex(complex c1,complex c2)
{
	complex result;
	result.real=c1.real+c2.real;
	result.imag=c1.imag+c2.imag;
	return result;
}
int main()
{
	complex c1,c2,sum;
	cout<<"First data:"<<endl;
	c1.get_data();
	cout<<"Second data:"<<endl;
	c2.get_data();
	cout<<"Show first data:"<<endl;
	c1.display_complex();
	cout<<"Show second data:"<<endl;
	c2.display_complex();
	sum=add_complex(c1,c2);
	sum.display_calculation();
	return 0;
	
}


















