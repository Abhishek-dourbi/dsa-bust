#include <iostream>
using namespace std;

void reverse(int arr[], int size) {
    int start = 0;
    int end = size - 1;

    while(start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void printArray(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[6] = {4, 2, 6, 1, 30, -21};
    int brr[5] = {20, 50, -2, 5, 1};

    reverse(arr, 6);
    reverse(brr, 5);

    printArray(arr, 6);
    printArray(brr, 5);
}