#include<iostream>
#include<vector>
using namespace std;

bool checkSorted(vector<int> &arr, int n, int i){


    // base class
    if(i==n-1){
        return true;
    }

    if(arr[i+1]<arr[i]){
        return false;
    }

    return checkSorted(arr,n,i+1);
}



int main(){
    vector<int>  v{10,20,70,40,50};
    int n = v.size();
    int i=0;

    bool isSorted = checkSorted(v,n,i);

    if(isSorted){
        cout<<"the array is sorted"<<endl;
    }
    else{
        cout<<"the array is not sorted"<<endl;
    }

}