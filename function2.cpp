// program to print a text

#include <iostream>
using namespace std;

// display a number
void displayNum(int n1, int n2) 
{
    cout << "The int number is " << n1<<endl;
    cout << "The double number is " << n2<<endl;
}

void addNum(int x,int y )
{

    int add;
	add=x+y;
	
	cout <<"addition="<<add<<endl;
}
int main()
 {
     
     int num1 = 5;
     int num2 = 5;

    // calling the function
    displayNum(num1, num2);
    addNum(num1,num2);

    return 0;
}
