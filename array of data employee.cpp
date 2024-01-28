#include<iostream>
using namespace std;

class Employee
{
	private:
		char name[20];
		char address[20];
		float salary;
		int E_id;
		char post[20];
	public:
		void get_details();
		void display_details();
		
};
int main()
{
	Employee emp[50];
	int size;
	cout<<"Enter the number of employee:"<<endl;
	cin>>size;
	for(int i=0;i<size;i++)
	{
		cout<<"Enter the data of respective employee:"<<endl;
		cout<<i+1<<"Enter the name of employee:"<<endl;
		emp[i].get_details();
		cout<<"Display the data of respective employee:"<<endl;
		emp[i].display_details();
		
	}
	return 0;
}
void Employee::get_details()
{
	cout<<"Enter Name:";
	cin>>name;
	cout<<"Enter Address:";
	cin>>address;
	cout<<"Enter Salary:";
	cin>>salary;
	cout<<"Enter E.id:";
	cin>>E_id;
	cout<<"Enter Post:";
	cin>>post;	
}
void Employee::display_details()
{
	cout<<"Name:"<<name<<endl;
	cout<<"Address:"<<address<<endl;
	cout<<"Salary:"<<salary<<endl;
	cout<<"E.id:"<<E_id<<endl;
	cout<<"Post:"<<post<<endl;		
}

