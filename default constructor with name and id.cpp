#include<iostream>
#include<string.h>
using namespace std;

class demo
{
	public:
		int id;
		char name[20];
		demo()  //default constructor
		{
			id=1;
			strcpy(name,"Sabin");
			
		}
		void display()
		{
			cout<<"Name and id:"<<name<<"and"<<id<<endl;
		}
};

int main()
{
	demo d1;
	d1.display();
	return 0;
}
