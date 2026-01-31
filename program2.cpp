#include<iostream>
using namespace std;
int main(){
    int number1,number2,number3;
    cout<<"Enter 1st number:";
    cin>>number1;
    cout<<"Enter 2st number:";
    cin>>number2;
    cout<<"Enter 3rd number:";
    cin>>number3;
    int sum=number1+number2+number3;
    cout<<"sum of three number is:"<<sum;
    int average=sum/3;
    cout<<"average is :"<<average;
        return 0;
}