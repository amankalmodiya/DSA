#include<iostream>
using namespace std;

int main(){
    int  average=0;
    int arr[]={55,85,45,79,55};
// for(int i=0;i<5;i++)
// {
//  average=average+arr[i];

// }
for(int a:arr){
    average = average+a;
}
cout<<"average is:"<<average/5;
}