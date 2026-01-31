#include<iostream>
using namespace std;
int main(){
double  a,b;
cout<<"enter 1st number:";
cin>>a;
char oper;
cout<<"enter operation:";
cin>>oper;
cout<<"enter 2nd number:";
cin>>b;

if(oper=='+'){
    cout<<"sum is:"<<a+b;
}
else  if(oper =='-'){
    cout<<"substraction is:"<<a-b;

}
else  if(oper=='*'){
    cout<<"multiplication is:"<<a*b;

}


    return 0;
}