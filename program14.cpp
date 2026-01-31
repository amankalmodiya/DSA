#include<iostream>
using namespace std;
int main(){
  double sellingPrice;
  double costPrice;
  cout<<"Enter sellingPrice:";
  cin>>sellingPrice;
cout<<"Enter costPrice:";
cin>>costPrice;

double profit=((sellingPrice-costPrice)/costPrice)*100;
cout<<"profit is :"<<profit<<"%";
return 0;
}