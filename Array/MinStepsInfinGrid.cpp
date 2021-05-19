int minSteps(int x1,int y1,int x2, int y2){
    int dx = abs(x1 - x2);
    int dy = abs(y1 - y2);
    int d = max(dx,dy);
    return d;
}

int Solution::coverPoints(vector<int> &A, vector<int> &B) {
    int sum = 0;
    for(int i=0;i<A.size()-1;i++){
        sum += minSteps(A[i],B[i],A[i+1],B[i+1]);
    }
    return sum;
}
