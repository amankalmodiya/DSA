#include<iostream>
using namespace std;
void greatest(int num1,int num2,int num3){
    int temp=num1;
if(temp>num2){
temp=num2;
}
if(temp>num3){
  temp=num3;
}
  cout<<"this number is greater:"<<temp;
}
int main(){
    int number1;
    int number2;
    int number3;
    cout<<"Enter number1:";
    cin>>number1;
    cout<<"Enter number2:";
    cin>>number2;
    cout<<"Enter number3:";
    cin>>number3;
    greatest(number1,number2,number3);
}