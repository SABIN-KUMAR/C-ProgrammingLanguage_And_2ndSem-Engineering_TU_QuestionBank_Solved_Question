#include<iostream>
#include<iomanip>
using namespace std;

class complex
{
	private:
		int real,imag;
	public:
		void get_data();
		void display_calculation();
		void display_data();
		complex add_complex(complex , complex);
		
};
int main()
{
	complex c1,c2,c3,c4;
	cout<<"Enter the first complex numbers:"<<endl;
	c1.get_data();
	cout<<"Enter the second complex numbers:"<<endl;
	c2.get_data();
	cout<<"Addition:"<<endl;
	c4=c3.add_complex(c1,c2);
	cout<<"First complex data:"<<endl;
	c1.display_data();
	cout<<"Second complex data:"<<endl;
	c2.display_data();
	cout<<"The calculation of complex numbers:"<<endl;
	c4.display_calculation();
	return 0;
}
void complex::get_data()
{
	cout<<"Real number:";
	cin>>real;
	cout<<"Imaginary number:";
	cin>>imag;
}
complex complex::add_complex(complex c1,complex c2)
{
	complex result;
	
	result.real=c1.real+c2.real;
	result.imag=c1.imag+c2.imag;
	return result;

}
void complex::display_calculation()
{
	cout<<"Addition of complex numbers:"<<real<<"+i"<<imag;
}
void complex::display_data()
{
	cout<<"Real"<<setw(10)<<"Imaginary"<<endl;
	cout<<real<<setw(10)<<imag<<endl;
}














