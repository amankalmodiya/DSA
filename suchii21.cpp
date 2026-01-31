#include<iostream>
using namespace std;
void alphabet(char element){
    if((element>='A' && element<='M')||(element>='a' && element<='m')){
        cout<<"part1:"<<element;
    }
    else if((element>='N' && element<='Z')||(element>='n' && element<='z')){
        cout<<"part2:"<<element;
    }
}
int main(){
    char ele;
    cout<<"Enter element:";
    cin>>ele;
    alphabet(ele);
}