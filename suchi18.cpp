#include<iostream>
using namespace std;
void traingle(int side1,int side2,int side3){

    if((side1+side2)>side3 && (side1+side3)>side2 && (side2+side3)>side1){
        cout<<"traingle is valid";
    }
    else{
        cout<<"traingle is invalid";
    }
}
int main(){
    int a,b,c;
    cout<<"enter side1:";
    cin>>a;
    cout<<"enter side2:";
    cin>>b;
    cout<<"enter side3:";
    cin>>c;
    traingle(a,b,c);
}