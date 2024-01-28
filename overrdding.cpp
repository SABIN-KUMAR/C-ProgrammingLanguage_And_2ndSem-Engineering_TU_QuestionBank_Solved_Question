#include<iostream>
using namespace std;

class Base{
protected:
int n;
public:
void input(){
cout<<“\n Enter a value in Base:”;
cin>>n;
}
};
class Derived: public Base{
protected:
int n;
public:
void input(){
cout<<“\n Enter a value in 
Derived:”;
cin>>n;
}
void display(){
cout<<“\n n=“<<n;
cout<<“\n n=“<<Base::n;
}
};
int main(){
Derived D1;
D1.input();
D1.Base::input();
D1.display();
return 0;
}

