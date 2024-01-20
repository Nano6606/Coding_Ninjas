QUESTION LINK:-
https://www.codingninjas.com/studio/problems/print-1-to-n_628290?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf


SOLUTION:-

#include <vector>

void generateArray(int n, std::vector<int>& result, int current) {
    if (current <= n) {
        result.push_back(current);
        generateArray(n, result, current + 1);
    }
}

std::vector<int> printNos(int x) {
    std::vector<int> result;
    generateArray(x, result, 1);
    return result;
}
