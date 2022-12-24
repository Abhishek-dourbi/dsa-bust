#include <iostream>
#include <vector>
using namespace std;

int getPivot(int arr[], int n) {
    int start = 0;
    int end = n - 1;
    int mid;

    while(start < end) {
        mid = start + (end - start) / 2;

        // if(arr[mid] >= arr[0]) {
        //     start = mid + 1;
        // } else {
        //     end = mid;
        // }

        // Alter Pivot

        if(arr[mid] <= arr[n - 1]) {
            end = mid - 1;
        } else {
            start = mid;
        }
    }

    return start;
}

int main() {
    int arr[5] = {3, 8, 10, 0, 1};

    cout << getPivot(arr, 5);

    return 0;
}