#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n; 

    int i = 1;

    while(i <= n) {
        int j = i;
        while(j > 0) {
            cout << j << " ";
            j--;
        }
        cout << endl;
        i++;
    }
} 


/*
    n = 4

    1
    2 1
    3 2 1
    4 3 2 1
*/