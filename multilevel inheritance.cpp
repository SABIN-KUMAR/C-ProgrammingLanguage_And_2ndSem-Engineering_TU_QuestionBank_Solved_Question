#include<iostream>
using namespace std;

class person
{
	private:
		char name[25];
		char address[25];
	public:
		void get_data()
		{
			cout<<"Enter name:"<<endl;
			cin>>name;
			cout<<"Enter address:"<<endl;
			cin>>address;
			
		}
		void display_data()
		{
			cout<<"Name:"<<name<<endl;
			cout<<"Address:"<<address<<endl;
		}
};

class employee:public person
{
	private:
		int empID;
		float salary;
	public:
		void get_data()
		{
			person::get_data();
		    cout<<"Enter the employee ID:"<<endl;
		    cin>>empID;
		    cout<<"Enter the salary:"<<endl;
		    cin>>salary;	
		}
		void display_data()
		{
			person::display_data();
			cout<<"Employee ID:"<<empID<<endl;
			cout<<"Salary:"<<salary<<endl;
		}
};

class manager:public employee
{
	private:
		char hidegree;
	public:
		void get_data()
		{
			employee::get_data();
		    cout<<"Enter highest degree:"<<endl;
		    cin>>hidegree;
		}
		void display_data()
		{
			employee::display_data();
			cout<<"Highest degree:"<<hidegree<<endl;
		}	
};

int main()
{
	manager m1;
	cout<<"Enter data on manager:"<<endl;
	m1.get_data();
	cout<<"Display data on manager:"<<endl;
	m1.display_data();
	return 0;
}




















