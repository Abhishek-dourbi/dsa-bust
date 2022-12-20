#include <iostream>
#include <vector>
using namespace std;

pair<int, int> findFirstLastPosition(vector<int> &arr, int n, int x)
{
    int start = 0;
    int end = n - 1;
    int mid;
    
    int firstOcc = -1;
    int endOcc = -1;
    
    while(start <= end) {
        mid = start + (end - start) / 2;
        
        if(arr[mid] == x) {
            firstOcc = mid;
            end = mid - 1;
        } else if(arr[mid] > x) {
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }
    
    start = 0;
    end = n - 1;
    
    while(start <= end) {
        mid = start + (end - start) / 2;

        if(arr[mid] == x) {
            endOcc = mid;
            start = mid + 1;
        } else if(arr[mid] > x) {
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }
    
    return make_pair(firstOcc, endOcc);
}

int main() {
    int arr[6] = {1, 2, 3, 3, 3, 5};

    vector<int> vect(begin(arr), end(arr));

    int key;

    cout << "Enter the element to search for" << endl;
    cin >> key;

    pair<int, int> found = findFirstLastPosition(vect, vect.size(), key);

    cout << "The First occurance of the key is " << found.first << endl;
    cout << "The Second occurance of the key is " << found.second << endl;

    return 0;
}