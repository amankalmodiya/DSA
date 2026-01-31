#include<iostream>
using namespace std;
int main(){
    int days;
    cout<<"Enter days:";
    cin>>days;
    int years=days/364;
    int temp=days%364;
    int months=temp/12;
    int day=temp%12;
    
    cout<<years<<":"<<months<<":"<<day;
    return 0;
}