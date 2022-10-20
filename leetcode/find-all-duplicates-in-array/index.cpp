#include <iostream>
#include <vector>
using namespace std;

vector<int> findDuplicates(vector<int>& nums) {
        // sorting solution
        
//         sort(nums.begin(), nums.end());
        
//         vector<int> ans;
        
//         for(int i = 0; i < nums.size() - 1; i++) {
//             if(nums[i] == nums[i + 1]) {
//                 ans.push_back(nums[i]);
//             }
//         }
        
//         return ans;


        // Better solution
        
    vector<int> ans;
    
    for(int i = 0; i < nums.size(); i++) {
        int currNum = abs(nums[i]);
        
        if(nums[currNum - 1] < 0) {
            ans.push_back(currNum);
        } else {
            nums[currNum - 1] = nums[currNum - 1] * (-1);
        }
    }
    
    return ans;
}

void printVector(vector<int>& vect) {
    for(int i = 0; i < vect.size(); i++) {
        cout << vect[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[8] = {4,3,2,7,8,2,3,1};
    vector<int> vect(begin(arr), end(arr));

    vector<int> res = findDuplicates(vect);

    printVector(res);
}

// https://leetcode.com/problems/find-all-duplicates-in-an-array/