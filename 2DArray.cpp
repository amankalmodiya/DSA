#include<iostream>
using namespace std;

int main(){
    int arr[2][3] = {{10,20,30},{11,12,13}};
for(int i=0;i<2;i++){
for(int j=0;j<3;j++){

    cout<<arr[i][j]<<" ";
}
cout<<endl;

}
    return 0;
}