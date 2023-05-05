#include<bits/stdc++.h>
using namespace std;

void rotateArray(vector<int>&arr, int n, int k){
    k%=n;

    vector<int>temp(n);
    for(int i=0; i<k; i++){
        temp[i]=arr[i];
    }

    for(int i=k; i<n; i++){
        arr[i-k]=arr[i];
    }

    for(int i=n-k; i<n; i++){
        arr[i]=temp[i-(n-k)];
    }
}

void printArray(vector<int>&arr, int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    vector<int>arr{1,2,3,4,5,6};
    int n=arr.size();
    int k;
    cout<<"Enter the value for rotation ";
    cin>>k;
    rotateArray(arr, n, k);
    printArray(arr, n);
}