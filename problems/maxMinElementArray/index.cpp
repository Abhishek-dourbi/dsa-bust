#include <iostream>
using namespace std;

int minElement(int num[], int size) {
    int result = INT_MAX;

    for(int i = 0; i < size; i++) {
        if(num[i] < result) {
            result = num[i];
        }
    }

    return result;
}

int maxElement(int num[], int size) {
    int result = INT_MIN;

    for(int i = 0; i < size; i++) {
        if(num[i] > result) {
            result = num[i];
        }
    }

    return result;
}

int main() {

    int size;

    cout << "Enter number of elements (<100)" << endl;
    cin >> size;

    int num[100];

    for(int i = 0; i < size; i++) {
        cin >> num[i];
    }

    cout << "Maximum elemnt is " << maxElement(num, size) << endl;
    cout << "Minimum elemnt is " << minElement(num, size) << endl;

} 