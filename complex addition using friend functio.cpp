#include<iostream>
#include<iomanip>
using namespace std;

class complex_2;
class complex_1
{
	private:
		int real,imag;
	public:
		void get_complex();
		void display_complex();
		void add_complex(complex_2 c2);
};
class complex_2
{
	private:
		int real,imag;
	public:
		void get_complex();
		void display_complex();
		friend void complex_1::add_complex(complex_2);
};
int main()
{
	complex_1 c1;
	complex_2 c2;
	cout<<"Enter the first complex number:"<<endl;
	c1.get_complex();
	cout<<"Enter the second complex number:"<<endl;
	c2.get_complex();
	cout<<"The resultant complex number is :"<<endl;
	c1.add_complex(c2);
	return 0;
}
void complex_1::get_complex()
{
	cout<<"Enter real number:"<<endl;
	cin>>real;
	cout<<"Enter imaginary number:"<<endl;
	cin>>imag;
}
void complex_2::get_complex()
{
	cout<<"Enter real number:"<<endl;
	cin>>real;
	cout<<"Enter imaginary number:"<<endl;
	cin>>imag;
	
}
void complex_1::display_complex()
{
	cout<<"Real:"<<setw(10)<<"Imaginary:"<<endl;
	cout<<real<<setw(10)<<imag<<endl;
	
}
void complex_2::display_complex()
{
	cout<<"Real:"<<setw(10)<<"Imaginary:"<<endl;
	cout<<real<<setw(10)<<imag<<endl;
}
void complex_1::add_complex(complex_2 c2)
{
	complex_1 result;
	result.real=real+c2.real;
	result.imag=imag+c2.imag;
	result.display_complex();
}
















