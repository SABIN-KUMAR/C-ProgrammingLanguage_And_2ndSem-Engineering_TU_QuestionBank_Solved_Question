#include<iostream>
#include<fstream>
using namespace std;

int main(){
char name[20];
int roll;
cout<<"\nEnter the name of student:";
cin>>name;
cout<<"\nEnter the roll of student:";
cin>>roll;
ofstream fout("Student");
fout<<name<<"\n"<<roll;
fout.close();
strcpy(name,"");
roll=0;
ifstream fin("Student");
fin>>name>>roll;
cout<<"\nName:"<<name;
cout<<"\nRoll:"<<roll;
return 0;
}

