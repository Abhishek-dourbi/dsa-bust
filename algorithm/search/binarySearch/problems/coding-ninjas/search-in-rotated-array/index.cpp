#include <iostream>
#include <vector>
using namespace std;

int getPivot(vector<int>& arr, int n) {
    int start = 0;
    int end = n - 1;
    int mid;

    while(start < end) {
        mid = start + (end - start) / 2;

        if(arr[mid] >= arr[0]) {
            start = mid + 1;
        } else {
            end = mid;
        }
    }

    return start;
}

int findPosition(vector<int>& arr, int n, int k)
{
    int pivot = getPivot(arr, n);
    int start = 0;
    int end = n - 1;
    int mid;
    
    if(k >= arr[pivot] && k <= arr[n - 1]) {
        start = pivot;
        end = n - 1;
    } else {
        start = 0;
        end = pivot;
    }
    
    while(start <= end) {
        mid = start + (end - start) / 2;
        
        if(arr[mid] == k) {
            return mid;
        } else if(arr[mid] < k) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    
    return -1;
}


// Alter approach with no get pivot
// int findPosition(vector<int>& nums, int n, int target)
// {
//     int start = 0, end = n-1, mid;
//     while(start <= end){
//         mid = start + (end - start) / 2;
        
//         if(target == nums[mid]){
//             return mid;
//         }
//         if(nums[end] > nums[mid]){
//             if(nums[mid] < target && nums[end] >= target){
//                 start = mid+1;
//             }
//             else{
//                 end = mid -1;
//             }
//         }
//         else{
//             if(nums[mid] > target && nums[start] <= target){
//                 end = mid-1;
//             }
//             else{
//                 start = mid+1;
//             }
//         }
//     }
//     return -1;
// }

int main() {
    int arr[7] = {2, 4, 5, 6, 8, 9, 1};

    vector<int> vect(begin(arr), end(arr));

    cout << findPosition(vect, vect.size(), 2);

    return 0;
}