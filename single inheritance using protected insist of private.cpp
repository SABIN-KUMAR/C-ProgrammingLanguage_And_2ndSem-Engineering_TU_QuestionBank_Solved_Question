#include<iostream>
using namespace std;

class student
{
	protected:
		char name[25];
		int student_id;
	public:
		void get_data()
		{
			cout<<"Enter the name of student:"<<endl;
			cin>>name;
			cout<<"Enter the student id:"<<endl;
			cin>>student_id;
		}
		void display_data()
		{
			cout<<"Name:"<<name<<endl;
			cout<<"Student Id:"<<student_id<<endl;
		}
		
};

class leader:public student
{
	private:
		char union_name[25];
	public:
		void get_data()
		{
			cout<<"Enter the name of student:"<<endl;
			cin>>name;
			cout<<"Enter the student id:"<<endl;
			cin>>student_id;
			cout<<"Enter Name of associated student union:"<<endl;
			cin>>union_name;
		}
		void display_data()
		{
			
			cout<<"Name of associated student union:"<<endl;
			cout<<union_name;
		}
};

int main()
{
	leader lead;
	cout<<"Enter the data on leader of student union:"<<endl;
	lead.get_data();
	cout<<"Data on leader of student union:"<<endl;
	lead.display_data();
	return 0;
}
