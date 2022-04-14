#include <iostream>
#include <math.h>
using namespace std;

int main() {

    int n;
    cin >> n;
    int res = 0;
    int i = 0;

    while(n!=0) {
        int bit = n & 1;

        res = res + pow(10,  i) * bit;
        n = n>>1;
        i++;
    }
    cout << res;
} 