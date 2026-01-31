#include<iostream>
using namespace std;
void divisiblity(int days,int months){
 if(months>=1 && months<=12){
    if(months==1 ||months==3 ||months==5 ||months==7 ||months==8 ||months==10 ||months==12 ){
        if(days>=1 && days<=31){
            cout<<"Valid"<<endl<<"months is:"<<endl<<months<<"days is:"<<days;
        }
        else{
            cout<<"invalid";
        }
    }
    else if(months==2 ){
        if(days>=1 && days<=29){
        cout<<"Valid"<<endl<<"months is:"<<endl<<months<<"days is:"<<days;
        }
        else{
            cout<<"invalid";
        }
    }
    else{
        if(months==4||months==6||months==9||months==11){
            if(days>=1 && days<=30){
        cout<<"Valid"<<endl<<"months is:"<<endl<<months<<"days is:"<<days;
        }
        else{
            cout<<"invalid";
        }
    }}}

 else{
    cout<<"Invalid months enter";
 }
}
int main(){
int d,m;
divisiblity(30,6);
}