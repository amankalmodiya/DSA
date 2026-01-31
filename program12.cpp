#include<iostream>
using namespace std;
int main(){
    int second1;
    cout<<"enter second1:";
    cin>>second1;
    int hour=second1/3600;
    int totalSecond=second1%3600;
    int minute=totalSecond/60;
    int second=totalSecond%60;

    cout<<(hour<10?"0":"")<<hour<<":";
    cout<<(minute<10?"0":"")<<minute<<":";
    cout<<(second<10?"0":"")<<second;
return 0;
}