#include <iostream>
using namespace std;

int findDuplicate(int arr[], int size) {
    //     Alter approach
    
    //     int n = arr.size();
    //     int actualSum = (n*(n-1))/2;
    //     int arrSum = 0;
        
    //     for(int i = 0; i < n; i++) {
    //         arrSum += arr[i];
    //     }
        
    //     return arrSum - actualSum;
    
    int ans = 0;
    
    // XORing all the array elements
    for(int i = 0; i < size; i++) {
        ans = ans ^ arr[i];
    }
    
    // XOR [1, n-1]
    for(int i = 1; i < size; i++) {
        ans = ans ^ i;
    }
    
    return ans;
}

int main() {
    int arr[7] = { 3, 4, 5, 2, 1, 4 };

    cout << "Duplicate element in the given array is " << findDuplicate(arr, 6) << endl;
}

// https://www.codingninjas.com/codestudio/problems/duplicate-in-array_893397