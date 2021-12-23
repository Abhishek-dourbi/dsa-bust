#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n; 

    int i = 1;

    while(i <= n) {
        int j = 1;
        int count = 1;
        while(j <= n + i - 1) {
            if(j > n - i) {
                cout << count;
                if(j >= n) {
                    count--;
                } else {
                    count++;
                }
            } else {
                cout << " ";
            }
            j++;
        }
        cout << endl;
        i++;
    }
} 


/*
    n = 4

       1   
      121
     12321
    1234321   
*/