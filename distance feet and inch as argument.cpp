#include<iostream>
#include<iomanip>
using namespace std;

class distances
{
	private:
		int inch,feet;
	public:
		void get_data();
		void display_data();
		void add_distances(distances,distances);
		void display_calculation();
		
};
int main()
{
	distances d1,d2,d3;
	cout<<"Enter the first distance:"<<endl;
	d1.get_data();
	cout<<"Enter the second distance:"<<endl;
	d2.get_data();
	cout<<"First data:"<<endl;
	d1.display_data();
	cout<<"Second data:"<<endl;
	d2.display_data();
	cout<<"Addition:"<<endl;
	d3.add_distances(d1,d2);
	cout<<"Addition of two distances:"<<endl;
	d3.display_calculation();
	return 0;
}
void distances::get_data()
{
	cout<<"Enter feets:"<<endl;
	cin>>feet;
	cout<<"Enter Inches:"<<endl;
	cin>>inch;
}
void distances::display_data()
{
	cout<<"Feets"<<setw(10)<<"Inches"<<endl;
	cout<<feet<<setw(10)<<inch<<endl;
}
void distances::add_distances(distances d1,distances d2)
{
	feet=d1.feet+d2.feet;
	inch=d1.inch+d2.inch;
	if(inch>12)
	{
		inch=inch%12;
		feet=feet+inch;
	}
}
void distances::display_calculation()
{
	cout<<"Result:"<<feet<<"feets"<<"/"<<inch<<"inches"<<endl;
}

























