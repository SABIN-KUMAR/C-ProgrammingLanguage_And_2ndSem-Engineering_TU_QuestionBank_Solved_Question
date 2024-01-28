#include<iostream>
using namespace std;

class employee
{
	private:
		char name[25];
		int empID;
		float salary;
	public:
		void get_data()
		{
			cout<<"Enter name:"<<endl;
			cin>>name;
			cout<<"Enter Employee ID:"<<endl;
			cin>>empID;
			cout<<"Enter salary:"<<endl;
			cin>>salary;
		}
		void diplay_data()
		{
			cout<<"Name:"<<name<<endl;
			cout<<"Employee ID:"<<empID<<endl;
			cout<<"Salary:"<<salary<<endl;
		}
};
class manager:public employee
{
	private:
		char hidegree[10];
	public:
		void get_data()
		{
			employee::get_data();
			cout<<"Enter the highest degree obtained:"<<endl;
			cin>>hidegree;
		}
		void display_data()
		{
			employee::diplay_data();
			cout<<"Highest degree:"<<hidegree<<endl;
			
		}
};
class secretary:public employee
{
	private:
		char name[25];
	public:	
	void get_data()
	{
		employee::get_data();
		cout<<"Enter name:"<<endl;
		cin>>name;
	}
	void display_data()
	{
		employee::diplay_data();
		cout<<"Name:"<<name<<endl;
	}
};

class teacher:public employee
{
	private:
		int num_periods;
	public:
		void get_data()
		{
			employee::get_data();
			cout<<"Enter the number of periods allocated:"<<endl;
			cin>>num_periods;
		}
		void display_data()
		{
			employee::diplay_data();
			cout<<"Numbers of periods allocated:"<<num_periods<<endl;
		}
};

int main()
{
	manager m1;
	secretary s1;
	teacher t1;
	cout<<"Enter the data on manager:"<<endl;
	m1.get_data();
	cout<<"Enter the data on secretary:"<<endl;
	s1.get_data();
	cout<<"Enter the data on teacher:"<<endl;
	t1.get_data();
	cout<<"Display the data on manager:"<<endl;
	m1.display_data();
	cout<<"Display the data on secretary:"<<endl;
	s1.display_data();
	cout<<"Display the data on teacher:"<<endl;
	t1.display_data();
	return 0;
}




















