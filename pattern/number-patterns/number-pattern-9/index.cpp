#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n; 

    int i = 1;

    while(i <= n) {
        int j = 1;
        while(j <= n) {
            if(j > i - 1) {
                cout << i;
            } else {
                cout << ' ';
            }
            j++;
        }
        cout << endl;
        i++;
    }
} 


/*
    n = 4

    1111
     222
      33
       4
*/