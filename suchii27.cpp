#include<iostream>
using namespace std;
int main(){
    int units;
    int bill;
    cout<<"Enter units:";
    cin>>units;
    if(units>=0 && units<=100){
        bill=units*5;
        cout<<bill;
    }
    else if(units>100 && units<=200){
        bill=(100*5)+((units-100)*7);e
        cout<<bill;
    }
    else if(units>200 && units<=300){
        bill=(100*5)+(100*7)+((units-200)*10);
        cout<<bill;
    }
    else{
        if(units>300){
            bill=(100*5)+(100*7)+(100*10)+((units-300)*15);
            cout<<bill;
        }
    }
}