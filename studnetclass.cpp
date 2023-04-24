#include<iostream>
using namespace std;
class student
{
  public:
  int stu_id;
  int stu_age;
  int stu_rollno;
  string stu_name;
  string stu_address;  
 
 
  privatedetails:(){ 
    cout<<"the details are"<<stu_id<<stu_age<<stu_name<<stu_address;
 
  }
}; 
int main(){
    student st[20];
    cout<<"enter the details";
    for(int i=0;i<20;i++){
        cin<<stu[i].stu_rollno>>stu[i].stu_id<<stu[i].stu_address>>stu[i].stu_age;
        cout<<stu[i].print details();
    }
}

