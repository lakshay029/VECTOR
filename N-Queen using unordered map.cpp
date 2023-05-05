#include<bits/stdc++.h>
using namespace std;

unordered_map<int, bool>rowCheck;
unordered_map<int, bool>upperleftdiagonalCheck;
unordered_map<int, bool>bottomleftdiagonalCheck;

void storeSol(vector<vector<char>>&board, int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<board[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl<<endl;
}

bool isSafe(int row, int col, vector<vector<char>>&board, int n){
    if(rowCheck[row] == true) return false;
    if(upperleftdiagonalCheck[n-1+col-row] == true) return false;
    if(bottomleftdiagonalCheck[row+col] == true) return false;
    return true;
}

void solve(vector<vector<char>>&board, int col, int n){
    if(col>=n){
        storeSol(board,  n);
        return;
    }

    for(int row=0; row<n; row++){
        if(isSafe(row, col, board, n)){
            board[row][col]='Q';

            rowCheck[row]=true;
            upperleftdiagonalCheck[n-1+col-row]=true;
            bottomleftdiagonalCheck[row+col]=true;

            solve(board, col+1, n);

            board[row][col]='.';
            rowCheck[row]=false;
            upperleftdiagonalCheck[n-1+col-row]=false;
            bottomleftdiagonalCheck[row+col]=false;
        }
    }
}

int main(){
    int n;
    cout<<"Enter:- ";
    cin>>n;

    vector<vector<char>>board(n, vector<char>(n, '.'));
    int col=0;
    solve(board, col, n);
}