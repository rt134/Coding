#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <vector>
#include <string>
#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    time_t start, end;
    

    time(&start);
    // Function
    time(&end);
    
    double time_taken = double(end - start);
    cout << "Time taken is : " << fixed << time_taken << setprecision(5);
    cout << " sec " << endl;
	
	return 0;
}
