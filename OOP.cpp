#include<iostream>
using namespace std;

class Aman{
public:
int roll=25;
string name="hello";

};

int main(){
Aman a;
a.roll=45;
a.name="AMAN kALMODIYA";

Aman b;
b.roll=52;
b.name="hii";
Aman c;
cout<<a.roll<<"\t"<<a.name<<endl;
cout<<b.roll<<"\t"<<b.name<<endl;
cout<<c.roll<<"\t"<<c.name;
    return 0;
}