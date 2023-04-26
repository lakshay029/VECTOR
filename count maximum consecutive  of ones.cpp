#include<bits/stdc++.h>
using namespace std;

int countOnes(vector<int>&arr, int n){
    int count=0;
    int maxi=0;
    for(int i=0; i<n; i++){
        if(arr[i] == 1){
            count++;
            maxi=max(maxi, count);
        }
        else{
            count=0;
        }
    }
    return count;
}

int main(){
    vector<int>arr{0,1,0,0,0,1,1,1,1,0,0,0,0,1,1,1,0,0,0,0,0,0,0,1,1,1,1,1,1,1,};
    int n=arr.size();
    cout<<countOnes(arr, n)<<endl;
}