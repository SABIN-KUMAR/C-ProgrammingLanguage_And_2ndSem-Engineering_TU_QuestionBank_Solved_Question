#include <iostream>
using namespace std;
class Animal 
{
 public:
  void makeSound() 
  {
    cout << "The animal makes a sound." << endl;
  }
};

class Dog : public Animal 
{
 public:
  void makeSound() 
  {
    cout << "The dog barks." << endl;
  }
};

int main() 
{
  Animal a;
  a.makeSound();

  Dog d;
  d.makeSound();

  return 0;
}

