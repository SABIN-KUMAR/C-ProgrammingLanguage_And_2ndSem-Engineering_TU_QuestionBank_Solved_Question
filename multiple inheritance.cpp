//multiple inheritance
#include<iostream>
using namespace std;

class student
{
	private:
		char name[25];
		int student_id;
	public:
		void get_data()
		{
			cout<<"Enter the name:"<<endl;
			cin>>name;
			cout<<"Enter student Id:"<<endl;
			cin>>student_id;
		}
		void display_data()
		{
			cout<<"Name:"<<name<<endl;
			cout<<"Student Id:"<<student_id<<endl;
		}
};

class employee
{
	private:
		char organization_name[50];
		int employee_id;
	public:
		void get_data()
		{
			cout<<"Enter Name of associated organization:"<<endl;
			cin>>organization_name;
			cout<<"Enter Employee Id:"<<endl;
			cin>>employee_id;
		}
		void display_data()
		{
			cout<<"Name of associated student union:"<<organization_name<<endl;
			cout<<"Employee Id:"<<employee_id<<endl;
		}
};
class marketing_officer:public student,public employee
{
	private:
		int working_hour;
	public:
		void get_data()
		{
			student::get_data();
			employee::get_data();
			cout<<"Enter the working hour:"<<endl;
			cin>>working_hour;
		}
		void display_data()
		{
			student::get_data();
			employee::display_data();
			cout<<"Working hour:"<<working_hour<<endl;
		}
};

int main()
{
	marketing_officer m1;
	cout<<"Enter the data of marketing officer:"<<endl;
	m1.get_data();
	cout<<"Data of marketing officer:"<<endl;
	m1.display_data();
	return 0;
}






















