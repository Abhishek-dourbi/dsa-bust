#include <iostream>
using namespace std;

int search(int arr[], int size, int key) {
    int start = 0;
    int end = size - 1;
    int mid;

    while(start <= end) {
        // mid = (start + end) / 2;

        // Better way
        // To avoid integer limit out of bound error
        mid = start + (end - start) / 2;

        if(arr[mid] == key) {
            return mid;
        }
        
        if(arr[mid] > key) {
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }
    return -1; 
}

int main() {
    int arr[10] = {-21, 1, 2, 4, 6, 10, 26, 30, 46, 94};
    int key;

    cout << "Enter the element to search for" << endl;
    cin >> key;

    int found = search(arr, 10, key);

    if(found != -1) {
        cout << "key is present at " << found << endl;
    } else {
        cout << "key is absent" << endl;
    }

    return 0;
}