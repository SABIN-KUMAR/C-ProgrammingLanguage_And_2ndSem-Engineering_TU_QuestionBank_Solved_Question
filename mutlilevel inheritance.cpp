#include <iostream>
using namespace std;
class Engine 
{
 public:
  void startEngine()
  {
    cout << "Engine started." << endl;
  }
};

class Wheels 
{
 public:
  void rotateWheels() 
  {
    cout << "Wheels rotated." << endl;
  }
};

class Car : public Engine, public Wheels 
{
	public:
		void name_car()
		{
			cout<<"Lamborghini." << endl;

		}
		

};

int main() 
{
  Car c;
  c.startEngine();
  c.rotateWheels();
  c.name_car();
  return 0;
}

