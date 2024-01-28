#include <iostream>
using namespace std;

// Function to add two integers
int add(int a, int b) {
    return a + b;
}

// Function to add three integers
int add(int a, int b, int c) {
    return a + b + c;
}

// Function to add two doubles
double add(double a, double b) {
    return a + b;
}

int main() {
    int sum1 = add(3, 4);
    int sum2 = add(2, 3, 4);
    double sum3 = add(2.5, 3.7);

    cout << "sum1 = " << sum1 << endl;
    cout << "sum2 = " << sum2 << endl;
    cout << "sum3 = " << sum3 << endl;

    return 0;
}

