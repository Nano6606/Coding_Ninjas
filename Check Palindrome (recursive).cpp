QUESTION LINK:-
https://www.codingninjas.com/studio/problems/check-palindrome-recursive_624386?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf


SOLUTION:-
#include <iostream>
#include <string>

bool isPalindrome(string& str, int start, int end) {
    if (start >= end) {
        return true;
    }
    if (str[start] != str[end]) {
        return false;
    }
    return isPalindrome(str, start + 1, end - 1);
}

bool isPalindrome(string& str) {
    return isPalindrome(str, 0, str.length() - 1);
}
