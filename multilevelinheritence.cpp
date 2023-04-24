#include<iostream>
using namespace std;
class A{
    public:
    int a;
    A(){
        cout<<"hello A"<<endl;
    }
};
class B: public A{
    public:
    int b;
    B(){
        cout<<"hello B"<<endl;
    }
};
class D:public B , public C {
    public:
    int d;
    D(){
        cout<<"hello D";
    }
};
class C:public D{
    public:
    int c;
    C(){
        cout<<"hello C"<<endl;
    }
};
int main(){
    D t;
    return 0;
}