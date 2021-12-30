#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n; 

    int i = 2;
    int first = 1;
    int second = 0;

    cout << second << " ";
    cout << first << " ";

    for(int i = 1; i <= n; i++) {
        int sum = first + second;
        cout << sum << " ";
        second = first;
        first = sum;
    }
} 