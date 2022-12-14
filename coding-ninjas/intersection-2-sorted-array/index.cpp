#include <iostream>
#include <vector>
using namespace std;

vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
        int i = 0;
        int j = 0;
        vector<int> ans;
    
        while(i < n && j < m) {
            if(arr1[i] == arr2[j]) {
                ans.push_back(arr1[i]);
                i++;
                j++;
            } else if(arr1[i] < arr2[j]) {
                i++;
            } else if(arr1[i] > arr2[j]) {
                j++;
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
    int arr1[6] = {1, 2, 2, 2, 3, 4};
    int arr2[4] = {2, 2, 3, 3};

    vector<int> vect1(begin(arr1), end(arr1));
    vector<int> vect2(begin(arr2), end(arr2));

    vector<int> res = findArrayIntersection(vect1, vect1.size(), vect2, vect2.size());

    printVector(res);
}

// https://www.codingninjas.com/codestudio/problems/intersection-of-2-arrays_1082149