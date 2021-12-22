#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n; 

    int i = 0;

    while(i < n) {
        int j = 1;
        while(j <= n) {
            cout << (n * i + j) << " ";
            j++;
        }
        cout << endl;
        i++;
    }
} 


/*
    n = 3

    1 2 3
    4 5 6
    7 8 9
*/

/*
    n = 4

    1 2 3 4
    5 6 7 8
    9 10 11 12
    13 14 15 16
*/