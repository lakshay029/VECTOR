#include<iostream>
using namespace std;
class xyz{
    public:
    int a;
    virtual void show(){
        cout<<"hello";
    }
};
class abc:public xyz{
    public:
    int b;
    show()
    cout<<"bye";
};
int main(){
    xyz* ptr;
    xyz k;
    abc m;
    ptr =&k;
    cout<<ptr-> show();
    ptr=&m;
    cout<<ptr->show();
}