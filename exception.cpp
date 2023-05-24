#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter the value of a and b: ";
    cin>>a>>b;
    try{
        c=a/b;
        if(b==0)
        throw (c);
        else{
            cout<<"the result is: ";
        }
        }
        catch(int x){
            cout<<"kindly enter the non zero value";
    }
return 0;
}
