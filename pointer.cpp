#include<iostream>
using namespace std;
int main(){
 int arr[4]={10,20,30,40};
cout<<arr;
cout<<arr[0]<<endl;
cout<<&arr<<endl;
cout<<&arr[0]<<endl;


    int* ptr =arr;
    cout<<ptr<<endl;
    cout<<&ptr<<endl;
    cout<<*arr;
}