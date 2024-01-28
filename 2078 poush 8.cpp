#include <iostream>
using namespace std;

class Animal {
public:
    virtual void makeSound() {
        cout << "Animal sound" << endl;
    }
};

template <class T>
class Dog : public Animal {
public:
    void makeSound() {
        cout << "Woof!" << endl;
    }

    void run(T speed) {
        cout << "The dog runs at " << speed << " mph." << endl;
    }
};

int main() {
    Dog<int> myDog;
    myDog.makeSound();
    myDog.run(10); // outputs "The dog runs at 10 mph."

    return 0;
}

