#include <iostream>
using namespace std;

class Student {
private:
    int marks1;
    int marks2;

public:
    void read_marks() {
        cout << "Enter marks for subject 1: ";
        cin >> marks1;
        cout << "Enter marks for subject 2: ";
        cin >> marks2;
    }

    void display_marks() {
        
        cout << "Marks in subject 1: " << marks1 << endl;
        cout << "Marks in subject 2: " << marks2 << endl;
    }

    
};

class Test : public Student {
public:
	student::read_marks();
	student::display_marks();
	
    
};

int main() {
    Test t;
   
    t.read_marks();
  
    t.display_marks();
   
    return 0;
}

