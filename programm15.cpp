#include<iostream>
using namespace std;
int main(){

int a=83;
int b=621;
int c=57;

cout<<"Before swapping:"<<endl;
cout<<"a is:"<<a<<endl;
cout<<"b is:"<<b<<endl;
cout<<"c is:"<<c<<endl;

b=a+b+c;//18
a=b-(a+c);//6

c=a+b+c;//31
b=c-(a+b);//7

c=c-((a*2)+(b*2));
cout<<"After swapping:"<<endl;
cout<<"a is:"<<a<<endl;
cout<<"b is:"<<b<<endl;
cout<<"c is:"<<c;
    return 0;
}