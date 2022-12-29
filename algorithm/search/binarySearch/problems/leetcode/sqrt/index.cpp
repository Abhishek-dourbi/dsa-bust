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

int main() {
    cout << mySqrt(27);

    return 0;
}