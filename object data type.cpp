//c++ object as data types
#include<iostream>
//#include<iomanip>
//#include<cstring>

using namespace std;

class complex
{
	private:
		float real;
		float imag;
	public:
		void get_data()
		{
			cout<<"Enter the real part:";
			cin>>real;
			cout<<"Enter the imaginary part:";
			cin>>imag;
			
		}
		void display()
		{
			cout<<real<<"+i"<<imag<<endl;
			
		}
		 void add(complex c1,complex c2)
		{
			real=c1.real+c2.real;
			imag=c1.imag+c2.imag;
			
		} 
		 
};
int main()
{
	complex c1,c2,c3;
	cout<<"Enter the data for the first complex number:";
	c1.get_data();
	cout<<"Enter the data for the second complex number:";
	c2.get_data();
	c3.add(c1,c2);
	c3.display();
	return 0;
	
}





















