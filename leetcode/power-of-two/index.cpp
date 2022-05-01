#include <iostream>
#include <math.h>
using namespace std;

    bool isPowerOfTwoAlter(int n) {
        if(n == 1) return true;
        int res = 1;
        
        for(int i = 0; i < 30; i++) {
            
            res = res * 2;
            if(res == n) return true;
        }
        return false;
    }
    
    bool isPowerOfTwo(int n) {
        int res = 1;
        
        for(int i = 0; i <= 30; i++) {
            if(res == n) return true;
            
            if(res < INT_MAX / 2)
                res = res * 2;
        }
        return false;
    }

int main() {

    int n;
    cin >> n; 

    cout << isPowerOfTwo(n);
} 

// 231
// https://leetcode.com/problems/power-of-two/