#include<iostream>
using namespace std;
void  traingle(int num1,int num2,int num3){
    int result=num1+num2+num3;
if(result==180){
    cout<<"valid traingle";
}
else{
    cout<<"invlid traingle";

}
}
int main(){
    int number1,number2,number3;
    cout<<"Enter 1st number";
    cin>>number1;
    cout<<"Enter 2nd number";
    cin>>number2;
    cout<<"Enter 3rd number";
    cin>>number3;
    traingle(number1,number2,number3);
}