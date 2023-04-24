#include<iostream>
using namespace std;
class sides{
    public:
    int a,b,c,d,e;
    void calculate(int p){
        a=p;
        b=a*a;
        cout<<"the square is: "<<b<<endl;
    }
    void calculate(int p,int q){
        a=p;
        b=q;
        c=a*a+b*b;
        cout<<"the sum of the squares: "<<c<<endl;
    }
    void calculate(int p,int q,int r){
        a=p;
        b=q;
        c=r;
        d=a+b+c;
        cout<<"the sum if the three sides of the triangle: "<<d<<endl;
        if(a==b==c){
            cout<<"it is the equivlent triangle"<<endl;
        }
        else if(a!=b!=c){
            cout<<"it is the scalene trianlge"<<endl;
        }
        else {
            cout<<"it is a isoceles triangle"<<endl;
        }
        
    }
    void calculate(int p,int q,int r,int s){
        a=p;
        b=q;
        c=r;
        d=s;
        e=a*a*a+b*b*b+c*c*c+d*d*d;
        cout<<"it is the sum of the cube of the trapezium: "<<e<<endl;
    }

};
int main(){
    sides s1;
    s1.calculate(4);
    s1.calculate(3,4);
    s1.calculate(4,6,5);
    s1.calculate(4,1,6,5);
}