#include <iostream>
using namespace std;

int factorial(int n) {
    if(n == 1) return 1;
    return n * factorial(n-1);
}

int nCr(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main() {
    int n, r;

    cout << "Enter the value of n" << endl;
    cin >> n;

    cout << "Enter the value of r" << endl;
    cin >> r;

    cout << "Answer is " << nCr(n, r) << endl;
}