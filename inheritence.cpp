#include<iostream>
using namespace std;

class maths{
    public:
    int maths_marks;
};
class science{
    public:
    int science_marks;
};
class english{
    public:
    int english_marks;
};
class student: public maths,public science,public english{
    public:
    int total_marks;
    int calculate_marks()
    {
        total_marks=maths_marks+science_marks+english_marks;
        return total_marks;
    }
};
int main(){
    student s;
    int k;
    s.maths_marks=20;
    s.science_marks=30;
    s.english_marks=40;
    k=s.calculate_marks();
    cout<<"total marks of the student is: "<<k;
    return 0;
}