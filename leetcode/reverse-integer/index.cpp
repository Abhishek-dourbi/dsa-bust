#include <iostream>
using namespace std;

int reverse(int x) {
    int res = 0;
    
    while(x) {
        int digit = x % 10;
        
        if(res > INT_MAX / 10 || res < INT_MIN / 10) return 0;
        
        res = res * 10 + digit;
        x = x/10;
    }
    
    return res;
}

int main() {

    int n;
    cin >> n; 

    cout << reverse(n);
} 

// 7
// https://leetcode.com/problems/reverse-integer/