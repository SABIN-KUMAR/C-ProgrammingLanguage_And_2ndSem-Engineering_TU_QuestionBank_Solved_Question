#include<iostream>
#include<iomanip>
#include<cstring>
using namespace std;


class product
{
	private:
		int product_id;
		char name[50];
		float cost;
	public:
		void get_data(int pid,char pname[],float pcost)
		{
			product_id=pid;
			strcpy (name,pname);
			cost=pcost;
		}
	void display()
	{
		cout<<"PRODUCT ID"<<setw(10)<<"PRODUCT NAME"<<setw(10)<<"PRODUCT COST"<<endl;
		cout<<product_id<<setw(15)<<name<<setw(15)<<cost<<endl;
		
	}	
};
int main()
{
	product p1,p2;
	p1.get_data(01,"sabin",99);
	p2.get_data(02,"kumar",99);
	p1.display();
	p2.display();
	return 0;
	
}

