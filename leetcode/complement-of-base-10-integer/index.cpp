#include <iostream>
#include <math.h>
using namespace std;

int bitwiseComplement(int x) {
    int res = 0;
    int i = 0;
    int bit;
    
    while(x!=0) {
        bit = x & 1;

        if(bit == 0) {
            res += pow(2, i);
        };
        i++;
        x = x >> 1;
    }
    return res;
}

int main() {

    int n;
    cin >> n; 

    cout << bitwiseComplement(n);
} 

// 1009
// https://leetcode.com/problems/complement-of-base-10-integer/