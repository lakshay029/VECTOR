#include<bits/stdc++.h>
using namespace std;


int  main(){
    int n;
    cout<<"Enter the Elements ";
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }


    int hash[100000]={0};
    for(int i=0; i<n; i++){
        hash[arr[i]]++;
    }

    cout<<'\n';

    int q;
    cout<<"Enter the query ";
    cin>>q;
    while(q--){
        int number;
        cin>>number;

        cout<<hash[number]<<" ";
    }
}