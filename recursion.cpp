#include<iostream>
using namespace std;

int aman(int a){
if(a>0){
  cout<<a;
  aman(--a);
  
}
    return 0;
}

int main(){
    int result=aman(5);
// cout<<result;
}
