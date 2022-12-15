#include <iostream>
#include <vector>
using namespace std;

void printVector(vector<int>& vect) {
    for(int i = 0; i < vect.size(); i++) {
        cout << vect[i] << " ";
    }
    cout << endl;
}

void printNestedVector(vector<vector<int> >& vect) {
    for(int i = 0; i < vect.size(); i++) {
        printVector(vect[i]);
    }
    cout << endl;
}

vector<vector<int> > findTriplets(vector<int>arr, int n, int K) {
    sort(arr.begin(), arr.end());
    vector<vector<int> > ans;
    
    for(int i = 0; i < n; i++) {
        int j = i + 1;
        int k = n - 1;
        
        while(j < k && arr[i] != arr[i-1]) {
            int sum = arr[i] + arr[j] + arr[k];
            if(sum == K) {
                vector<int> temp;
                
                temp.push_back(arr[i]);
                temp.push_back(arr[j]);
                temp.push_back(arr[k]);
                
                ans.push_back(temp);
                
                while(j < k) {
                    if(arr[j] == arr[j+1]) {
                        j++;
                    } else if(arr[k] == arr[k-1]) {
                        k--;
                    } else break;
                }
                
                j++;
                k--;
            } else if(sum < K) {
                j++;
            } else if(sum > K) {
                k--;
            }
        }
    }
    
    return ans;
}

int main() {
    int arr[8] = { 1, 2, 3, 1, 2, 3 };

    // 1 1 2 2 3 3

    vector<int> vect(begin(arr), end(arr));

    vector<vector<int> > res = findTriplets(vect, vect.size(), 6);

    printNestedVector(res);
}

// https://www.codingninjas.com/codestudio/problems/triplets-with-given-sum_893028