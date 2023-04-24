#include<iostream>
using namespace std;
class student{
    private:
    char name[2];
    int rollNo;
    int total;
    float perc;
    
    public:
    void getdetails(void);
    void putdetails(void);
};
void student::getdetails(void){
    cout<<"enter name: "<<endl;
    cin>>name;
    cout<<"enter the rollNo: "<<endl;
    cin>>rollNo;
    cout<<"the total marks is: "<<endl;
    cin>>total;

    perc=(float)total/500*100;
}
void student::putdetails(void){
    cout<<"student details: "<<endl;
    cout <<"name"<<name<<"rollNo: "<<rollNo<<"total"<<total<<"percentage"<<perc<<endl;
}
int main(){
    student std;
    int n, loop;
    cout <<"enter total number of students: "<<endl;
    cin>>n;

    for(loop=0;loop<n;loop++){
        cout<<"enter details of student "<<loop+1<<endl;
        std.getdetails();
    }
    cout<<endl;
    for (loop=0;loop<n;loop++){
        cout<<"details of student "<<(loop+1)<<endl;
        std.putdetails();
    }
    cout<<endl;

    }

    