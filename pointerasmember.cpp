//pointer as data
#include<iostream>

using namespace std;

class pointerasmem
{
	private:
		int *ptr;
	public:
		void get_data(int *value)
		{
			ptr=value;
			
		}
		void display()
		{
			cout<<*ptr;
		}
		
};
int main()
{
	pointerasmem p1;
	int num=10;
	p1.get_data(*num);
	p1.display();
	return 0;
	
}


