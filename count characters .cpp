#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cout<<"Enter the characetr ";
    cin>>s;

    int hash[26]={0};
    for(int i=0; i<s.size(); i++){
        hash[s[i]-'a'];
    }

    int a;
    cout<<"Enter the query ";
    cin>>a;
    while(a--){
        char n;
        cin>>n;

        cout<<hash[n-'a']<<" ";
    }
}