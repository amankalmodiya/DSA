#include<iostream>
using namespace  std;
int main(){
    
int arr[]={10,20,5,7,2,33,47,98,75};
int highestAge=arr[0];
for(int a:arr){
    if(a>highestAge){
        highestAge=a;
    }
}
cout<<"lowest age is:"<<highestAge;
    return 0;
}