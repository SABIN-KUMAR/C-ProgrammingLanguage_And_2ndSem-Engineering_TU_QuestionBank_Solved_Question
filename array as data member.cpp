#include<iostream>
using namespace std;

class student
{
	private:
		char name[50];
		int score[5];
	public:
		void get_data();
		void display();
		//void total_resut();
};
void student::get_data()
{
	cout<<"Enter Data for student:";
	cout<<"NAME";
	cin>>name;
	for(int i=0;i<5;i++)
	{
		cout<<"Marks of subject"<<endl;
		cin>>score[i];
	}
}
void student::display()
{
	cout<<"NAME:"<<name;
	cout<<"Marks in 5 subjects:";
	for(int i=0;i<5;i++)
	{
		cout<<score[i]<<"\n";
	}
}

//void student::total_result()
//	{
//		int total=0;
//        for(int i=0;i<5;i++)
//        
//        	total=total+score[i];
//		
//		float avg=0;
//		avg=total/5;
//		cout<<"Total"<<total<<"Average:"<<avg<<endl;
//	}
//	
//	
//}
int main()
{
	student s1;
	s1.get_data();
	s1.display();
//	s1.total_display();
	return 0;
}





















