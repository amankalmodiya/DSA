#include<iostream>
using namespace std;

int main() {
   int amount;
   int intrestRate;
   int months;

   cout<<"Enter amount:";
   cin>>amount;
   cout<<"enter intrest rate:";
   cin>>intrestRate;
   cout<<"enter months:";
   cin>>months;

   int EMI=(amount/months)+(amount*intrestRate/100);
   cout<<EMI;
    return 0;
}
