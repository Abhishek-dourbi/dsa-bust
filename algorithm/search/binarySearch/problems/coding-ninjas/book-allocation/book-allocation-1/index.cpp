#include <iostream>
#include <vector>
using namespace std;

int isPossible(vector<int> arr, int n, int m, int curr_min) {
    int studentRequired = 1;
    int curr_sum = 0;
    
    for(int i = 0; i < n; i++) {
        if(arr[i] > curr_min) return false;
        
        if(curr_sum + arr[i] > curr_min) {
            studentRequired++;
            
            curr_sum = arr[i];
            
            if(studentRequired > m) return false;
        } else {
            curr_sum += arr[i];
        }
    }
    return true;
}

int allocateBooks(vector<int> arr, int n, int m) {
    int start = 0;
    int end = 0;
    int result = INT_MAX;
    
    for(int i = 0; i < n; i++) {
        end += arr[i];
    }
    
    while(start <= end) {
        int mid = (start + end) / 2;
        if(isPossible(arr, n, m, mid)) {
            result = mid;
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }
    
    return result;
}

int main() {
    int arr[4] = {10, 20, 30, 40};
    vector<int> vect(begin(arr), end(arr));

    cout << allocateBooks(vect, 4, 2);

    return 0;
}


// https://www.codingninjas.com/codestudio/problems/ayush-and-ninja-test_1090540