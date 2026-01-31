#include<iostream>
using namespace std;

class Suchii{
public:
string title;
string author;
int year;

};

int main(){
    Suchii a;
    Suchii a1;
    a.title="the rich man";
    a.author="dr.kumar";
    a.year=1991;

    cout<<a.title<<endl;
    cout<<a.author<<endl;
    cout<<a.year<<endl;

}
