#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n; 

    int i = 1;

    while(i <= n) {
        int j = 1;
        while(j <= n) {
            if(j > n - i) {
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

       1
      22
     333
    4444  
*/