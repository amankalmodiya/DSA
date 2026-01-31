#include<iostream>
using namespace  std;
struct car{
int model;
char grade;
};
int aman(car &cc){
    cc.model=2020;
cout<<"model fun is:"<<cc.model<<endl<<"grade fun is:"<<cc.grade<<endl;

return 0;
}

int main(){
car c;
c.model=2025;
c.grade='*';
cout<<"model nor is:"<<c.model<<endl<<"grade nor is:"<<c.grade<<endl;
aman(c);
cout<<"model mnmor  is:"<<c.model<<endl<<"grade nor is:"<<c.grade<<endl;

    return  0;
}    