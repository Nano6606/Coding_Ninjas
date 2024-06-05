QUESTION LINK:-
  https://www.naukri.com/code360/problems/find-unique_625159?source=youtube&campaign=love_babbar_codestudio1&utm_source=youtube&utm_medium=affiliate&utm_campaign=love_babbar_codestudio1&leftPanelTabValue=PROBLEM&nps=true

SOLUTION:-

#include <iostream>
#include <vector>
using namespace std;

int findUnique(int *arr, int size) {
    int uniqueElement = 0;
    for (int i = 0; i < size; ++i) {
        uniqueElement ^= arr[i];
    }
    return uniqueElement;
}
