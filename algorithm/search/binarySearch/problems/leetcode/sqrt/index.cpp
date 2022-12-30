#include <iostream>
using namespace std;

int mySqrt(int x) {
    int start = 0;
    int end = x;
    long long int mid;

    while(start <= end) {
        mid = start + (end - start) / 2;

        if((mid * mid) == x) return mid;
        else if((mid * mid) < x) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }

    return start - 1;
}

float getPricision(int x, int precision, int ans) {
    float factor = 1;
    float res = ans;

    for(int i = 0; i < precision; i++) {
        factor = factor / 10;
        float temp = res + factor;

        while((temp * temp) <= x) {
            temp = temp + factor;
        }
        res = temp - factor;
    }

    return res;
}

int main() {
    int ans = mySqrt(27);
    float preciseAns = getPricision(27, 3, ans);

    cout << preciseAns;

    return 0;
}