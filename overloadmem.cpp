//overloading member function
#include<iostream>
#include<iomanip>

using namespace std;

class overloadmem
{
	private:
		char ch;
		int num;
	public:
		void get_data(char , int );
		void display();
		void display(int);
		void display(char);
		void display(char,int);
		
};
void overloadmem::get_data(char name ,int roll)
{
	ch=name;
	num=roll;
	
}
void overloadmem::display()
{
	for(int i=0;i<5;i++)
	{
		cout<<setw(5)<<ch<<endl;
		
	}
}
void overloadmem::display(int num1)
{
	for(int i=0;i<num1;i++)
	{
			cout<<setw(5)<<ch<<endl;

	}
}
void overloadmem::display(char name)
{
	for(int i=0;i<num;i++)
	{
		cout<<setw(5)<<name<<endl;
	}
}
void overloadmem::display(char name,int num1)
{
	for(int i=0;i<num1;i++)
	{
		cout<<setw(5)<<name<<endl;
	}
}

int main()
{
	overloadmem l;
	l.get_data('sabin',2);
	l.display();
	l.display(2);
	l.display('k');
	l.display('k',2);
	return 0;
}



















