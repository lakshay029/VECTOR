#include<iostream>
using namespace std;
class Shape{
    public:
    virtual double calculateArea()=0;
};
class Reactangle : public Shape{
    private:
    double lenght;
    double width;
    public:
    Reactangle(double l , double w):lenght(1),width(w){}
    double calculateArea(){
        return lenght* width;
    }
};
class circle :public Shape{
    private:
    double radius;
    public:
    circle(double r): radius(r){}
    double calculateArea(){
        return 3.14 * radius *radius;
    }
};
int main(){
    Reactangle Reactangle(4.0,5.0);
    circle circle(3.6);
    cout<<"reactangle area: "<<Reactangle.calculateArea()<<endl;
    cout<<"circle area: "<<circle.calculateArea()<<endl; 
    return 0;
}