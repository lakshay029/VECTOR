#include<iostream>
using namespace std;
class student {
    private:
    srting name;
    float marks[3];
    float total;
    float percentage;
    public:
    void getdata(){
        cout<<"enter name: ";
        getline(cin,name);
        cout<<"enter marks for three subject: "<<endl;
        for(int i=0;i<3;i++){
            cout<<"subject"<<i+1<<":";
            cin>>marks[i];
        }
    }
    void compute(){
        total= marks[0]+marks[1]+marks[2];
        percentage=(total/300)*100;
    }

}