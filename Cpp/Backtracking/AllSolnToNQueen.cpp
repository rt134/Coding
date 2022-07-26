#include<bits/stdc++.h>
#include<vector>
using namespace std;

bool isSafe(vector<vector<int> > board,int row, int col)
{
    int i, j;
    int N = board.size();
 
    for (i = 0; i < col; i++){
        if (board[row][i] == 1){
            return false;
        }
    }
 
    for (i = row, j = col; i >= 0 && j >= 0; i--, j--){
        if (board[i][j] == 1){
            return false;
        }
    }
 
    for (i = row, j = col; j >= 0 && i < N; i++, j--){
        if (board[i][j] == 1){
            return false;
        }
    }
    return true;
}

void PrintBoard(vector<vector<int>> v){

    for(int i=0;i<v.size();i++){
        for(int j=0;j<v.size();j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

void NQSoln(vector<vector<int>> board,int col, int size){

    if(col == size){
        for(int i=0;i<size;i++){
            board[i][col] = 1;
            if(isSafe(board,i,col)){
                PrintBoard(board);
            }
            board[i][col] = 0;
        }
        return;
    }

    for(int i=0;i<size;i++){
        board[i][col] = 1;
        NQSoln(board,col+1,size);
        board[i][col] = 0;
    }
    
}




int main(){

    int n,count=0;
    cin>>n;

    vector<vector<int>> board;

    for(int i=0;i<n;i++){
        vector<int> v;
        for(int j=0;j<n;j++){
            v.push_back(0);
        }
        board.push_back(v);        
    }

    cout<<"Input Board"<<endl;
    PrintBoard(board);
    
    NQSoln(board,0,n);

    return 0;
}