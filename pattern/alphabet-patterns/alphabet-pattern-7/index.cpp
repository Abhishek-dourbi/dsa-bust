#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n; 

    int i = 1;

    while(i <= n) {
        int j = 1;
        while(j <= i) {
            cout << char('A' + i - 1 + j - 1) << " ";
            j++;
        }
        cout << endl;
        i++;
    }
} 


/*
    A
    B C
    C D E
    D E F G
*/