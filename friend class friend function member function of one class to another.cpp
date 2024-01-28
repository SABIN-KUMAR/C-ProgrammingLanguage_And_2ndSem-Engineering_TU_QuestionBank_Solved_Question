#include<iostream>
using namespace std;

class total;
class theory;
class pratical;
void calculate_marks(pratical,theory);
class total
{
	private:
		int total_marks;
	public:
		void calculate_marks(pratical,theory);
	
	
};
class theory
{
	private:
		int tmarks;
	public:
		void get_marks();
		void display_marks();
		friend class total;
};
class pratical
{
	private:
		int pmarks;
	public:
		void get_marks();
		void display_marks();
		friend class total;
};

int main()
{
	total marks;
	pratical pmarks;
	theory tmarks;
	pmarks.get_marks();
	tmarks.get_marks();
	pmarks.display_marks();
	tmarks.display_marks();
	marks.calculate_marks(pmarks,tmarks);
	return 0;	
}

void theory::get_marks()
{
	cout<<"Enter the theory marks:"<<endl;
	cin>>tmarks;
}

void pratical::get_marks()
{
	cout<<"Enter the pratical marks:"<<endl;
	cin>>pmarks;
}

void theory::display_marks()
{
	cout<<"Theory marks:"<<tmarks<<endl;
	
}

void pratical::display_marks()
{
	cout<<"Pratical marks:"<<pmarks<<endl;
}

void total::calculate_marks(pratical x, theory y)
{
	cout<<"Total marks:"<<x.pmarks+y.tmarks<<endl;
}




















