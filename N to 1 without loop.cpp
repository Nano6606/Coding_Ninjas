QUESTION LINK:-
https://www.codingninjas.com/studio/problems/n-to-1-without-loop_8357243?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf

  
SOLUTION:-

#include <vector>
void generateArray(int n, std::vector<int>& result) {
    if (n >= 1) {
        result.push_back(n);
        generateArray(n - 1, result);
    }
}
std::vector<int> printNos(int x) {
    std::vector<int> result;
    generateArray(x, result);
    return result;
}
  
