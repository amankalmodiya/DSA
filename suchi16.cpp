#include<iostream>
using namespace std;
void marks(int marks){
    if(marks<=100){
    if(marks>=90 && marks<=100){
        cout<<"grade A";
    }
    else if(marks>=80 && marks<=89){
        cout<<"grade B";
    }
    else if(marks>=70 && marks<=79){
        cout<<"grade C";
    }
    else if(marks>=60 && marks<=69){
        cout<<"grade D";
    }
    else if(marks>=50 && marks<=59){
        cout<<"grade E";
    }
    else if(marks>=40 && marks<=49){
        cout<<"grade B";
    }
    else{
        cout<<"fail";
    }
}
else{

    cout<<"invalid marks";
}
}
int main(){
    int mark;
    cout<<"Enter marks:";
    cin>>mark;
    marks(mark);
}