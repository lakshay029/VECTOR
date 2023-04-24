#include<iostream>
using namespace std;
class maths{
    public:
    int maths_marks;
    maths marks=20;
};
class science{
    public:
    int science_marks;
};
class student : public maths,public science {
    public:
    int total_marks;
    int calculate_marks(){
        total_marks=maths_marks+science _marks;
        return total_marks;
    }
};
int main(){
    student s;
    int k;
    s.maths_marks=20;
    s.science_marks=30;
    k=s.calculate marks();
    cout<<"total marks is: "<<k;
        return 0;
}