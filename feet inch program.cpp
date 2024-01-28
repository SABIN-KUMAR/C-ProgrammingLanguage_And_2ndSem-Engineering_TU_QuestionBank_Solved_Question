#include<iostream>
using namespace std;

class distance
{
	private:
		int feet,inch;
	public:
		void get_data()
		{
			cout<<"Enter the distance values:"<<endl;
			cin>>feet>>inch;
			
		}
		distance difference(distance d1,distance d2)
		{
			distance d3;
			if(d1.inch,d2.inch)
			{
				d1.inch+=12;
				d1.feet-=1;
			}
			d3.inch=d1.inch-d2.inch;
			d3.feet=d1.feet-d2.feet;
			return d3;
		}
		
};

int main()
{
	distance d1,d2,d4;
	d1.get_data();
	d2.get_data();
	d4=d3.difference(d1,d2);
	cout<<"feet="<<d4.feet<<"inch="<<d4.inch<<endl;
	return 0;
}















