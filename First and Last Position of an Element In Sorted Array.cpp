QUESTION LINK: 
https://www.naukri.com/code360/problems/first-and-last-position-of-an-element-in-sorted-array_1082549?source=youtube&campaign=love_babbar_codestudio2&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio2&leftPanelTabValue=PROBLEM


Example:
Input: 'arr' = [0,1,1,5] , 'k' = 1
Output: 1 2
Explanation:
If 'arr' = [0, 1, 1, 5] and 'k' = 1, then the first and last occurrence of 1 will be 1(0 - indexed) and 2.
  

SOLUTION:

#include <iostream>
#include <vector>
#include <utility>

using namespace std;

pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k) {
    int first = -1, last = -1;
    int low = 0, high = n - 1;
    
    // Finding the first occurrence of k
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == k) {
            first = mid;
            high = mid - 1;
        } else if (arr[mid] < k) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    
    // Resetting low and high for finding the last occurrence of k
    low = 0;
    high = n - 1;
    
    // Finding the last occurrence of k
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == k) {
            last = mid;
            low = mid + 1;
        } else if (arr[mid] < k) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    
    return make_pair(first, last);
}

