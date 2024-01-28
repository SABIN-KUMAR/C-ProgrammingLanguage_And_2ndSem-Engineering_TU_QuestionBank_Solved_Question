// program to add two numbers using a function

#include <iostream>

using namespace std;

// declaring a function
int add(int a, int b) 
{
    return (a + b);
}
int minu(int x, int y)
{
	return (x-y);
}

int main() 
{

    int sum;
    int sub;
    
    // calling the function and storing
    // the returned value in sum
    sum = add(100, 78);
    sub = minu(100,50);
    

    cout << "100 + 78 = " << sum << endl;
    cout << "100 - 50 = " << sub << endl;

    return 0;
}
