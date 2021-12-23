#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n; 

    int i = 1;

    while(i <= n) {
        int j = 1;
        while(j <= n) {
            if(j <= n - i + 1) {
                cout << j;
            } else {
                cout << '*';
            }            
            j++;
        }

        int start = n;
        while(start > 0) {
            if(start <= n - i + 1) {
                cout << start;
            } else {
                cout << '*';
            }
            start--;
        }
        cout << endl;
        i++;
    }
} 


/*
    n = 4

    12344321
    123**321
    12****21
    1******1

    n = 5

    1234554321
    1234**4321
    123****321
    12******21
    1********1
*/