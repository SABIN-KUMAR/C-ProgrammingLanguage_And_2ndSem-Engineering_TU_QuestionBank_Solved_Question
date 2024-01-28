#include<iostream>
#include<string.h>
using namespace std;

class student
{
	char name[20];
	int roll;
	public:
		void get_data(char n[20],int r)
		{
			strcpy(name,n);
			roll=r;
		}
		void display()
		{
			cout<<"Name:"<<name;
			cout<<"Roll no:"<<roll;
		}
};
int main()
{
	student s1;
	student *ptr,*btr;
	ptr=&s1;
	s1.get_data('Advanced',10);
	btr=new student;
	btr=get_data('pulchowk',12);
	s1.display();
	return 0;
}
