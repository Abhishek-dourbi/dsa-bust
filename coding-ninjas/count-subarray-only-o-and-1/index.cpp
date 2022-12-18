#include <iostream>
#include <vector>
using namespace std;

int numberofSubarrays(vector<int> & arr, int n){
    int i = 0;
    int ans = 0;
    
    while(i < n) {
        int countOne = 0;
        int countZero = 0;
        
        if(arr[i] == 1) {
            countOne++;
            while(i < n - 1 && arr[i + 1] == 1) {
                countOne++;
                i++;
            }
            ans += (countOne*(countOne + 1)) / 2;
        } else if(arr[i] == 0) {
            countZero++;
            while(i < n - 1 && arr[i + 1] == 0) {
                countZero++;
                i++;
            }
            ans += (countZero*(countZero + 1)) / 2;
        }
        i++;
    }
    
    return ans;
}

int main() {
    int arr[8] = {1, 1, 0, 1, 0, 0, 1, 0};
    
    vector<int> vect(begin(arr), end(arr));

    cout << numberofSubarrays(vect, vect.size());
}

// https://www.codingninjas.com/codestudio/problems/count-subarrays-consisting-of-only-0-s-and-only-1-s-in-a-binary-array_1262154?leftPanelTab=0