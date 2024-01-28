#include<iostream>
#include<iomanip>
using namespace std;

class student
{
	private:
		char name[50];
		int roll_number;
		char location[50];
	public:
		void get_data()
		{
			cin>>name>>roll_number>>location;
		}
		
		void display()
		
		{
			
			cout<<"NAME"<<setw(20)<<"ROLL NUMBER"<<setw(20)<<"LOCATION"<<endl;
			cout<<name<<setw(10)<<roll_number<<setw(20)<<location<<endl;
		}
		
};
int main()
{
	student s1;
	s1.get_data();
	s1.display();
	
	return 0;
}
