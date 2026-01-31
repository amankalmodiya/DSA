#include<iostream>
using  namespace std;
int main(){
    int number=921;
int a1=number/100;//9
int temp=number%100;
int a2=temp/10;//2
int a3=number%10;//8
int newNumber=(a3+a1)/2;
cout<<newNumber;


    return 0;
}