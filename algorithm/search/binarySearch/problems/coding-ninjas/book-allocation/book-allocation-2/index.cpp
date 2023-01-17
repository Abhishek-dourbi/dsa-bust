#include <iostream>
#include <vector>
using namespace std;

bool isPossible(vector<int> time, int n, int m, long long int mid) {
    long long int dayRequired = 1;
    long long int currSum = 0;
    
    for(int i = 0; i < m; i++) {
        if(time[i] > mid) return false;
        
        if(time[i] + currSum > mid) {
            dayRequired++;
            currSum = time[i];
            
            if(dayRequired > n) return false;
        } else {
            currSum += time[i];
        }
    }
    
    return true;
}

long long ayushGivesNinjatest(int n, int m, vector<int> time) 
{	
	// Write your code here.
    long long int start = 0;
    long long int end = 0;
    long long int result = 0;
    
    for(int i = 0; i < m; i++) {
        end += time[i];
    }
    
    while(start <= end) {
        long long int mid = start + (end - start) / 2;
        
        if(isPossible(time, n, m, mid)) {
            result = mid;
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }
    
    return result;
}

int main() {
    int arr[5] = {1, 2, 2, 3, 1};
    vector<int> vect(begin(arr), end(arr));

    cout << ayushGivesNinjatest(3, 5, vect);

    return 0;
}


// https://www.codingninjas.com/codestudio/problems/ayush-and-ninja-test_1097574