#include<iostream>
using namespace std;
void quatrant(int x,int y){
    if(x>0 && y>0){
        cout<<"quatrant 1"<<"("<<x<<","<<y<<")";
    }
    else if(x<0 && y>0){
        cout<<"quatrant 2"<<"("<<x<<","<<y<<")";
    }
     else if(x<0 && y<0){
        cout<<"quatrant 3"<<"("<<x<<","<<y<<")";
    }
     else if(x>0 && y<0){
        cout<<"quatrant 4"<<"("<<x<<","<<y<<")";
    }
     else if(x==0 && y!=0){
        cout<<"y-axis"<<"("<<x<<","<<y<<")";
    }
    else if(x!=0 && y==0){
        cout<<"x-axis"<<"("<<x<<","<<y<<")";
    }
    else{
        cout<<"origin of the point"<<"("<<x<<","<<y<<")";
    }
}
int main(){

    int x,y;
    cout<<"enter x point:";
    cin>>x;
     cout<<"enter y point:";
    cin>>y;
    quatrant(x,y);
}