#include<iostream>
using namespace std;

class Vehicle{
    public:
int model=2025;
string type="racing car";
int by(){
cout<<"p p";
    return 0;
}
};
class Car:public Vehicle{
    public:
     int   model=2026;
    int hello(){
    
cout<<"p p";
        return 0;
    }
};
int main(){
    // Vehicle v;
    // cout<<v.by();
    Car c;
    cout<<c.model; 
}