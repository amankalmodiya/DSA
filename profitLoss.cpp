#include<iostream>
using namespace std;
void profit(int cost,int selling){
if(cost>selling){
    cout<<"loss";
}
else if(cost<selling){
    cout<<"profit";
}
else {
    cout<<"no loss no profit";
}

}
int main(){
    int costPrice;
    int sellingPrice;
    cout<<"Enter cost price:";
    cin>>costPrice;
    cout<<"Enter selling price:";
    cin>>sellingPrice;
    profit(costPrice,sellingPrice);
}