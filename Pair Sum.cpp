QUESTION:-
https://www.naukri.com/code360/problems/pair-sum_697295?source=youtube&campaign=love_babbar_codestudio1&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio1
  
SOLUTION:-

#include <bits/stdc++.h>

vector<vector<int>> pairSum(vector<int> &arr, int s) {
    vector<vector<int>> res;
    unordered_map<int, int> mp;
    for (int i = 0; i < arr.size(); i++) {
        int target = s - arr[i];
        if (mp.find(target) != mp.end()) {
            int count = mp[target];
            while (count--) {
                if (target <= arr[i]) {
                    res.push_back({target, arr[i]});
                } else {
                    res.push_back({arr[i], target});
                }
            }
        }
        mp[arr[i]]++;
    }
    sort(res.begin(), res.end());
    return res;
}
