QUESTION LINK:-
https://www.codingninjas.com/studio/problems/reverse-an-array_8365444?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf

  
SOLUTION:-

#include <iostream>
#include <vector>
std::vector<int> reverseArray(int n, std::vector<int> &nums) {
    int start = 0;
    int end = n - 1;
    while (start < end) {
        std::swap(nums[start], nums[end]);
        start++;
        end--;
    }
    return nums;
}
