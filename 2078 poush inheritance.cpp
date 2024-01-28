#include <iostream>

using namespace std;

// Base class A
class A {
protected:
    int a;

public:
    A() {
        cout << "Enter value for A: ";
        cin >> a;
    }

    void display() {
        cout << "A = " << a << endl;
    }
};

// Derived class B
class B : public A {
protected:
    int b;

public:
    B() {
        cout << "Enter value for B: ";
        cin >> b;
    }

    void display() {
        A::display();
        cout << "B = " << b << endl;
    }
};

// Derived class C
class C : public A {
protected:
    int c;

public:
    C() {
        cout << "Enter value for C: ";
        cin >> c;
    }

    void display() {
        A::display();
        cout << "C = " << c << endl;
    }
};

// Derived class D
class D : public B, public C {
protected:
    int d;

public:
    D() {
        cout << "Enter value for D: ";
        cin >> d;
    }

    void display() {
        B::display();
        C::display();
        cout << "D = " << d << endl;
    }
};

int main() {
    // Create an object of the derived class D
    D myD;

    // Call the display() function on the object
    myD.display();

    return 0;
}

