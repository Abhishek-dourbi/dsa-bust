#include <iostream>
using namespace std;

void swapAlternate(int arr[], int size) {
    for(int i = 0; i < size; i+=2) {
        if(i + 1 < size) {
            swap(arr[i], arr[i + 1]);
        }
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

    swapAlternate(arr, 6);
    swapAlternate(brr, 5);

    printArray(arr, 6);
    printArray(brr, 5);
}