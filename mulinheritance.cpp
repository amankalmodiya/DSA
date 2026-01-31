#include<iostream>
using namespace std;
class  parent1{
    public:
    int money=44400000;
    void level1(){
cout<<"level1 has many  money1"<<endl;
    }
};
class parent2{
public:
    int money=550000;

 void level2(){
cout<<"level1 has many  money2"<<endl;
    }
};
class child:public parent1,public parent2{
public:

};
int main(){
 child c;

cout<<c.parent1::money;
    return 0;
}