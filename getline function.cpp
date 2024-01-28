#include<iostream>
#include<fstream>
using namespace std;

int main()
{
char name[20];
char Address[50];
cout<<"\nEnter name of student:";
cin.getline(name,20);
cout<<"\nEnter the address:";
cin.getline(Address,50);
cout<<"\nName:"<<name;
cout<"\nAddress:"<<Address;
return 0;
}
