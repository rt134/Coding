#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <vector>
#include <string>
#include <bits/stdc++.h>
using namespace std;

void Print(vector<vector<int>> v){
    for(int i=0;i<v.size();i++){
        for(int j=0;j<v[0].size();j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

bool isSafe(int x, int y, vector<vector<int>> v){
    if(x >= 0 && x < 8 && y >= 0 && y < 8 && v[x][y] == -1){
        return true;
    }
    return false;
}


int Solve(vector<vector<int>> v, int row, int col, int move, int x[], int y[]){

    if(move == 64){
        Print(v);
        return 1;
    }

    for(int i=0;i<8;i++){
        int xn = x[i] + row;
        int yn = y[i] + col;
        
        if(isSafe(xn,yn,v)){
            v[xn][yn] = move;
            if(Solve(v,xn,yn,move+1,x,y) == 1){
                return 1;
            }
            else{
                v[xn][yn] = -1;
            }
            
        }
        
    }
    return 0;
}

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    time_t start, end;
    
    int n = 8;
    vector<vector<int>> board;

    for(int i=0;i<n;i++){
        vector<int> v;
        for(int j=0;j<n;j++){
            v.push_back(-1);
        }
        board.push_back(v);
    }

    int xMove[8] = { 2, 1, -1, -2, -2, -1, 1, 2 };
    int yMove[8] = { 1, 2, 2, 1, -1, -2, -2, -1 };

    board[0][0] = 0;
    cout<<"Initial Board"<<endl;
    Print(board);

    time(&start);

    if(Solve(board,0,0,1,xMove,yMove) == 0){
        cout<<"No sol";
    }

    time(&end);


    double time_taken = double(end - start);
    cout << "Time taken is : " << fixed << time_taken << setprecision(5);
    cout << " sec " << endl;
	
	return 0;
}
