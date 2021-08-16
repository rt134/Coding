#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <vector>
#include <string>
#include <bits/stdc++.h>
using namespace std;
#define MAX 1000

int maxHist(int row[],int C)
{
    stack<int> result;
    int top_val; 
    int max_area = 0;
    int area = 0;
    int i = 0;
    
    while (i < C) {
        
        if (result.empty() || row[result.top()] <= row[i])
            result.push(i++);
        else {
            top_val = row[result.top()];
            result.pop();
            area = top_val * i;

            if (!result.empty())
                area = top_val * (i - result.top() - 1);
            max_area = max(area, max_area);
        }
    }
    

    while (!result.empty()) {
        top_val = row[result.top()];
        result.pop();
        area = top_val * i;
        if (!result.empty())
            area = top_val * (i - result.top() - 1);

        max_area = max(area, max_area);
    }
    return max_area;
}
  
int maxArea(int A[][4], int n, int m) {
    int result = maxHist(A[0],m);

    for (int i = 1; i < n; i++) {
        for (int j = 0; j < m; j++)
            if (A[i][j])
                A[i][j] += A[i - 1][j];
                
        result = max(result, maxHist(A[i],m));
    }

    return result;
    
}


int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int M[4][4];

    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cin>>M[i][j];   
        }
    }

    cout<<maxArea(M,4,4);
	
	return 0;
}
