QUESTION LINK:-
https://www.naukri.com/code360/problems/reverse-the-order-of-words-in-a-string_1264991?leftPanelTabValue=PROBLEM

SOLUTION:-

#include <iostream>
#include <algorithm>

using namespace std;

void reverseString(string& str, int start, int end) {
    while (start < end) {
        swap(str[start], str[end]);
        start++;
        end--;
    }
}

string reverseOrderWords(string str) {
    int n = str.length();

    // Reverse the entire string
    reverseString(str, 0, n - 1);

    int start = 0;
    for (int end = 0; end < n; end++) {
        if (str[end] == ' ') {
            reverseString(str, start, end - 1);
            start = end + 1;
        }
    }

    // Reverse the last word
    reverseString(str, start, n - 1);

    return str;
}
