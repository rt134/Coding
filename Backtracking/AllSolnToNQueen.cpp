#include<bits/stdc++.h>
#include<vector>
using namespace std;

bool check(vector<vector<int>> board, int col, int row){
    int n = board.size();

    // Col will be distinct

    // Checking for row
    for(int i=0;i<col;i++){
        if(board[row][i] == 1){
            return false;
        }
    }

    int i,j;
    // Checking upper diagonal
    for(i = row,j = col;i>=0,j>=0;i--,j--){
        if(board[i][j] == 1){
            return false;
        }
    }

    // Checking Lower diagonal
    for(i = row,j = col;i<n,j>=0;i++,j--){
        if(board[i][j] == 1){
            return false;
        }
    }

    return true;
}

bool NQSoln(vector<vector<int>>& board,int col, int size){

    if(col == size){
        for(int i=0;i<size;i++){
            if(check(board,col,i)){
                return true;
            }
        }
    }

    bool res = false;
    for(int i=0;i<size;i++){
        if(check(board,col,i)){
            board[i][col] = 1;
            res = NQSoln(board,col+1,size) || res;
            board[i][col] = 0;
        }
    }



    return res;
}


int main(){

    int n,count=0;
    cin>>n;

    vector<vector<int>> board;

    for(int i=0;i<n;i++){
        vector<int> v;
        for(int j=0;i<n;j++){
            v.push_back(0);
        }
        board.push_back(v);        
    }

    for(int i=0;i<n;i++){
        for(int j=0;i<n;j++){
            cout<<board[i][j]<<" ";
        }
        cout<<endl;
    }
    
    // for(int i=0;i<n;i++){
    //     cout<<"i ";
    //     if(NQSoln(board,i,n)){
    //         count++;
    //     }
    // }
    // cout<<count<<endl;

    return 0;
}