QUESTION LINK:-
https://www.naukri.com/code360/problems/duplicate-in-array_893397?source=youtube&campaign=love_babbar_codestudio1&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio1&leftPanelTabValue=PROBLEM

SOLUTION:-

#include <iostream>
#include <vector>

using namespace std;

int findDuplicate(vector<int> &arr) {
    int xor_sum = 0;
    for (int num : arr) {
        xor_sum ^= num;
    }

    for (int i = 1; i < arr.size(); ++i) {
        xor_sum ^= i;
    }

    return xor_sum;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }

        cout << findDuplicate(arr) << endl;
    }

    return 0;
}


