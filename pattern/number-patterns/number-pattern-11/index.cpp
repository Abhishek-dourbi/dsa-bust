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
                cout << j;
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

    1 2 3 4
      2 3 4
        3 4
          4
*/