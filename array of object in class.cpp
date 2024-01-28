//array of object in class

#include<iostream>
using namespace std;

class student
{
//	;private:
//		int roll;
//		char name[50];
//		float marks[3];
//		float total
	public:
		int roll;
		char name[50];
		float marks[3];
		float total;
		void get_data()
{
	cout<<"Enter the name of student:";
	cin>>name;
	cout<<"Enter the roll number of student:";
	cin>>roll;
	for(int i=0;i<3;i++)
	{
		cin>>marks[i];
		total+=marks[i];
	}
}
void display()
{
	
	
	cout<<"Roll number:"<<roll;
	cout<<"Name of student:"<<name[50];
	for(int i=0;i<3;i++)
	{
		cout<<"Marks of students:"<<marks[i];
	}
}
//		void get_data();
//		void display();
		
			
};
//void student::get_data()
//{
//	cout<<"Enter the name of student:";
//	cin>>name;
//	cout<<"Enter the roll number of student:";
//	cin>>roll;
//	for(int i=0;i<3;i++)
//	{
//		cin>>marks[i];
//		total+=marks[i];
//	}
//}
//void student::display()
//{
//	
//	
//	cout<<"Roll number:"<<roll;
//	cout<<"Name of student:"<<name[50];
//	for(int i=0;i<3;i++)
//	{
//		cout<<"Marks of students:"<<marks[i];
//	}
//}
int main()
{
	student s[5];
	for(int i=0;i<3;i++)
	{
		s[i].get_data();
		
	}
	for(int i=0;i<5;i++)
	{
		s[i].display();
	}
	return 0;
}































