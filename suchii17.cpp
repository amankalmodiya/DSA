#include<iostream>
using namespace std;

void traingle(int side1,int side2,int side3){
if(side1==side2 && side1==side3){
    cout<<"Equavalent";
}
else if(side1==side2 || side1==side3 || side2==side3){
    cout<<"isosceles";
}
else{
    cout<<"Scalene";
}
}
int main(){
    int side1,side2,side3;
    cout<<"enter side1:";
    cin>>side1;
     cout<<"enter side2:";
    cin>>side2;
     cout<<"enter side3:";
    cin>>side3;
    traingle(side1,side2,side3);
}