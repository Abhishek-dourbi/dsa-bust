#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n; 

    int res = 0;
        
    while(n!=0) {
        if(n&1) res++;
        n = n>>1;
    }

    cout << res;
}

// 191
// https://leetcode.com/problems/number-of-1-bits/