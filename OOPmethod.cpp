#include<iostream>
using namespace std;

class Aman{
private:
int a=10;
public:
int  getter();
};
int Aman::getter(){
    
    cout<<a;
}
int main(){
   Aman a;
   a.getter();
   
}