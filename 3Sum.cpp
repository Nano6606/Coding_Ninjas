QUESTION:-
https://www.naukri.com/code360/problems/triplets-with-given-sum_893028?source=youtube&campaign=LoveBabbar_Codestudiovideo1&utm_source=youtube&utm_medium=affiliate&utm_campaign=LoveBabbar_Codestudiovideo1&leftPanelTabValue=PROBLEM
  
SOLUTION:-

#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> findTriplets(vector<int> arr, int n, int K) {
    vector<vector<int>> result;
    sort(arr.begin(), arr.end());

    for (int i = 0; i < n - 2; i++) {
        if (i > 0 && arr[i] == arr[i - 1]) continue;
        int j = i + 1, k = n - 1;

        while (j < k) {
            int sum = arr[i] + arr[j] + arr[k];
            if (sum == K) {
                result.push_back({arr[i], arr[j], arr[k]});
                while (j < k && arr[j] == arr[j + 1]) j++;
                while (j < k && arr[k] == arr[k - 1]) k--;
                j++;
                k--;
            } else if (sum < K) {
                j++;
            } else {
                k--;
            }
        }
    }

    return result;
}
