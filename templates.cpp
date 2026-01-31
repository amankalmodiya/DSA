#include<iostream>
using namespace std;
template<typename T,typename T1,typename t2>
class Aman{
    public:
int add(T a,T1 b,t2 c){
    return a+b+c;
}
};
int main(){
   Aman<int,double,float>a;
   cout<<a.add(5,5.25,52.5); 
//    cout<<add<double>(5.0,2.5);
}