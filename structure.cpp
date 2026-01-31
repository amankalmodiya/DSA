#include<iostream>
using namespace std;

int main(){

// struct{

//     int a=10;
//     char b='*';
//     string c="aman"; 
// }Aman,Suchi;

// Suchi.c="heloo";
// cout<<Aman.a<<endl;
// cout<<Suchi.a<<endl;
// cout<<Suchi.c<<endl;
// cout<<Aman.c;


// struct car{

//     int m=10;
//     char n='+';
//     string p="suchi";
// };
// car carr;

// cout<<carr.m;


struct student{
    int  roll;
    string name;
    char grade;
};
student aman;
int m;
int a=aman.roll=11;
char b=aman.grade='A';
string c=aman.name="Aman Kalmodiya";

// cout<<student;
cout<<a<<endl<<b<<endl<<c;
return 0;
}