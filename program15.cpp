#include<iostream>
using namespace std;
int main(){

    int a=5;
    int b=6;
    int c=7;
    cout<<"before swap:"<<endl<<"a is:"<<a<<endl;
    cout<<"b is:"<<b<<endl;
    cout<<"c is:"<<c<<endl;

int temp=a;
a=b;
b=c;
c=temp;

  cout<<"After swap:"<<endl<<"a is:"<<a<<endl;
    cout<<"b is:"<<b<<endl;
    cout<<"c is:"<<c<<endl;

    return 0;
}