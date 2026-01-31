#include<iostream>
using namespace std;
int main(){
    int marks[5];
    int m=0;
    int temp=0;
    if(m=0){
    for(int i=0;i<5;i++){
        m++;
cout<<"enter subject"<<m<<"marks:";
cin>>marks[i];
if(marks[i]<=100){

}else{
    cout<<"invalid marks";
    break;
}
    }

    }
    else{
for(int a:marks){
    temp+=a;
}
cout<<"sum of marks is:"<<temp<<endl<<"percentage is:"<<temp/5;
    }
return 0;
}