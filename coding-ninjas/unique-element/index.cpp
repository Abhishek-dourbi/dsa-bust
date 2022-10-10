#include <iostream>
using namespace std;

int findUnique(int arr[], int size) {
    int result = 0;
    
    for(int i = 0; i < size; i++) {
        result = result ^ arr[i];

        // Logic Behind
        
            // 2 ^ 2 = 0;
            // 0 ^ 5 = 5;
    }
    
    return result;
}

int main() {
    int arr[7] = { 2, 3, 1, 6, 3, 6, 2 };

    cout << "Unique element in the given array is " << findUnique(arr, 7) << endl;
}

// https://www.codingninjas.com/codestudio/problems/find-unique_625159