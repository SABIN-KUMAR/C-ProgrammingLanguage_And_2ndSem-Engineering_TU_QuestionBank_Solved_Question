#include<iostream>
using namespace std;
namespace Function{
namespace Data{
int x=12;
int y=12;
}
void product(){
using namespace Data;
cout<<x*y;
}
void sum(){
using namespace Data;
cout<<x+y;
}
}
int main(){
Function::Data::x=10;
Function::Data::y=3;
Function::product();
Function::sum();
}

