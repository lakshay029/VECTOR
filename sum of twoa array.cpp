#include<iostream>
using namespace std;

int main(){
    int arr1[5]={1,2,3,4,5};
    int arr2[5]={6,7,8,9,10};

    int result[5];

    for(int i=0;i<5;i++){
        result[i] = arr1[i]+arr2[i];
    }
    for(int i=0;i<5;i++){
        cout<<result[i]<<" ";
    }
cout<<endl;
}