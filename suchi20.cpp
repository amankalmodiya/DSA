#include<iostream>
using namespace std;
void calcualteDays(int years,int months){
if(months==2){
    if((years%4==0 && years%100!=0)|| years%400==0){
    cout<<"febrauray is 29days and years is"<<years;
}
    else{
        cout<<"febrauray is 28days and years is"<<years;
    }
}

else if(months==1 ||months==3 ||months==5 ||months==7 ||months==8 ||months==12 ||months==10){
    cout<<"year is"<<years<<endl<<"months number is "<<months<<":"<<"31 days";
}
else{
    cout<<"year is"<<years<<endl<<"months number is "<<months<<":"<<"30 days";
}
}
int main(){
    int y,m;
   calcualteDays(2025,5); 
}