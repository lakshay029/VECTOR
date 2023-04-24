#include<bits/stdc++.h>
using namespace std;
int main(){
    int n1,n2,m1,m2;
    cout<<"enter the dimension of matrix 1(m*n)";
    cin>>m1>>n1;
    cout<<"enter the dimension of matrix 2(m*n)";
    cin>>m2>>n2;
    if(n1 != m2){
        cout<<"matrix cannot be multiplied";
    }
    int matrix1[m1][n1];
    int matrix2[m2][n2];
    int result[m1][n2];
    cout<<"enter the element of matrix 1";
    for(int i=0;i<m1;i++){
        for(int j=0;j<n1;j++){
            cin>>matrix1[i][j];
        }
    }
    for(int i=0;i<m1;i++){
        for(int j=0;j<n2;j++){
            result[i][j]=0;
            for(int k=0;k<n1;k++){
                result[i][j]+= matrix1[i][k]*matrix2[k][j];
            }
        }
    }
    cout<<"result matrix"<<endl;
    for(int i=0; i<m1;i++){
        for(int j=0;j<n2;j++){
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
}