#include<iostream>
using namespace std;
void digit(int number){
if(number>=90 && number<=100){
    cout<<"grade:A \n number is:"<<number;
}
else if(number>=80 && number<90){
cout<<"grade:B \n number is:"<<number;
}
else{
    cout<<"three and more than digit number";
}
}
int main(){
int number;
cout<<"Enter number:";
cin>>number;
digit(number);
}