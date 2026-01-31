#include<iostream>
using namespace std;
void loop2(int number){
    int temp,count=0,sum=0,temp2=0;
    for(int i=0;i<number;number=number/10){
        temp=number%10;
        count++;
    }
    // temp=0;
                      
    // for(int i=0;i<number;ni++){
    //     temp=number%10;
    //      int result=1;  
    //     for(int j=0;j<count;j++){
    //         result=result*temp;
    //     }
    //     temp2=temp2+result;
    // }
    cout<<count;
}
int main(){
    int number;
    cout<<"Enter number:";
    cin>>number;
    loop2(number);
}