#include <iostream>
#include <vector>
using namespace std;

int specialSum(vector<int> &arr, int n)
{
    int ans = INT_MAX;
    int frontSum = 0;
    int rearSum = 0;
    
    for(int i = 0; i < n; i++) {
        frontSum += arr[i];
        rearSum += arr[n - i - 1];
        
        if((frontSum + rearSum) < ans) {
            ans = frontSum + rearSum;
        }
    }
    
    return ans;
}

int main() {
    int arr[4] = {1, 2, 3, 4};
    
    vector<int> vect(begin(arr), end(arr));

    cout << specialSum(vect, vect.size());
}

// https://www.codingninjas.com/codestudio/problems/special-sum_1281320