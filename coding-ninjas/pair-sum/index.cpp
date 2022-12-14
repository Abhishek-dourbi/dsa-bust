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

vector<vector<int> > pairSum(vector<int> &arr, int s){
    vector<vector <int> > ans;
    
    for(int i = 0; i < arr.size() - 1; i++) {
        for(int j = i + 1; j < arr.size(); j++) {
            if(arr[i] + arr[j] == s) {
                vector<int> temp; 
                
                temp.push_back(min(arr[i], arr[j]));
                temp.push_back(max(arr[i], arr[j]));
                
                ans.push_back(temp);
            }
        }
    }
    
    sort(ans.begin(), ans.end());
    
    return ans;
}

int main() {
    int arr[5] = {2, -3, 3, 3, -2};

    // -3 -2 2 3 3

    vector<int> vect(begin(arr), end(arr));

    vector<vector<int> > res = pairSum(vect, 0);

    printNestedVector(res);
}

// https://www.codingninjas.com/codestudio/problems/intersection-of-2-arrays_1082149