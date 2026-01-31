#include<iostream>
using namespace std;

int firstDigit(int number){
    int result=number/100;
    return result;
}

int main(){
    int number;
    cout<<"Enter number:";
    cin>>number;
    cout<<"first digit is:"<<firstDigit(number);
    return 0;
}