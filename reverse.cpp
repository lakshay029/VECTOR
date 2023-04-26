#include<bits/stdc++.h>
using namespace std;

void reverseWord(string a){
    string sen="";
    for(int i=a.length()-1; i>=0; --i){
        if(a[i]==' '){
            cout<<sen<<" ";
            sen="";
        }
        else{
            sen=a[i]+sen;
        }
    }
    cout<<sen<<endl;
}

int main(){
    string a="i love this program very much";
    reverseWord(a);
}