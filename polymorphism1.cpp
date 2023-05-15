#include<iostream>
using namespace std;
class Me{
    public:
    void func(int x){
        cout<<"value of x is "<<x<<endl;
    }
    void func(double x){
        cout <<"value of x s is "<<x<<endl;
    }
    void func(int x,int y){
        cout<<"value of x and y is "<<x<<","<<y<<endl;

    }
};
int main(){
    Me obj;
    obj.func(6);
    obj.func(9.34);
    obj.func(64,88);
    return 0;
}