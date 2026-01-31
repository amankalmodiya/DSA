#include<iostream>
using namespace std;

int LastDigit(){
    int number;
    cout<<"Enter number:";
    cin>>number;
    int result =number/10;
    return result;
}
int main(){
    // int number;
    cout<<LastDigit();
    return 0;
}