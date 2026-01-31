#include<iostream>
using namespace std;

void year(int yyear){
if((yyear%4==0)&&(yyear%100!=0)||(yyear%400==0)){
    cout<<"this year is leap year";
}
else{
    cout<<"This is not leap year";
}
  
}

int main(){
    int yearr;
cout<<"Enter Year:";
cin>>yearr;
year(yearr);
}