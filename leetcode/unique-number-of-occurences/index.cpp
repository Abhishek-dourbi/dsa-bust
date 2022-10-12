#include <iostream>
#include <vector>
using namespace std;

bool uniqueOccurrences(vector<int>& arr) {
    int i = 0;
    vector<int> ans;
    
    sort(arr.begin(), arr.end());
    
    while(i < arr.size()) {
        int count = 1;
        
        for(int j = i+1; j < arr.size(); j++) {
            if(arr[i] == arr[j]) {
                count++;
            } else break;
        }
        ans.push_back(count);
        i = i + count;
    }
    
    sort(ans.begin(), ans.end());
    
    for(int k = 0; k < ans.size() - 1; k++) {
        if(ans[k] == ans[k+1]) return false;
    }
    
    return true;
}

int main() {
    int arr[10] = {-3,0,1,-3,1,1,1,-3,10,0};
    vector<int> vect(begin(arr), end(arr));

    cout << uniqueOccurrences(vect) << endl;
}

// https://leetcode.com/problems/unique-number-of-occurrences/submissions/