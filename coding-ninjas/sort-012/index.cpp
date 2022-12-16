#include <iostream>
#include <vector>
using namespace std;

void sort012(int *arr, int n)
{
    int i = 0;
    int j = n - 1;
    int k = 0;
    
    while(k <= j) {
        if(arr[k] == 0) {
            swap(arr[i], arr[k]);
            i++;
            k++;
        } else if(arr[k] == 2) {
            swap(arr[j], arr[k]);
            j--;
        } else {
            k++;   
        }
    }
}

void printArray(int *arr) {
    for(int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[10] = { 0, 1, 1, 0, 0, 1, 1, 0, 1, 2 };

    sort012(arr, 10);

    printArray(arr);
}

// https://www.codingninjas.com/codestudio/problems/triplets-with-given-sum_893028