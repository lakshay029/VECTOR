#include<iostream>
using namespace std;
class logical{
    public:
    int a;
    void  operator!(){
        a=!a;
    }
};
int main(){
    logical logic;
    logic.a=0;
    !logic;
}