#include<iostream>
#include<iomanip>
using namespace std;

class student
{
	private:
		int roll;
		char name[50];
		char location[50];
	public:
		void get_data();
		void display();
		
		
};
inline void student::get_data()
{
	cin>>roll>>name>>location;
}
inline void student::display()
{
	cout<<"ROLL"<<setw(20)<<"NAME"<<setw(20)<<"LOCATION"<<endl;
	cout<<roll<<setw(10)<<name<<setw(15)<<location<<endl;
}
int main()
{
	student s1,s2;
	s1.get_data();
	s2.get_data();
	s1.display();
	s2.display();
	return 0;
}
