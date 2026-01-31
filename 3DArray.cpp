#include<iostream>
using namespace std;

int main(){
    int arr[2][2][3] = {{{10,20,30},
    {11,12,13}},{{1,2,3},{4,5,6}}};
for(int i=0;i<2;i++){
    cout<<"block:"<<i<<endl;
for(int j=0;j<2;j++){
for(int k=0;k<3;k++){
    cout<<arr[i][j][k]<<" ";
}
    cout<<endl;
}
cout<<endl;
}
    return 0;
}