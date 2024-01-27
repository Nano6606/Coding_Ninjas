QUESTION LINK:-
https://www.codingninjas.com/studio/problems/factorial-numbers-not-greater-than-n_8365435?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf


SOLUTION:-

#include <iostream>
#include <vector>
std::vector<long long> factorialNumbers(long long n) {
    std::vector<long long> result;
    long long factorial = 1;
    long long i = 1;
    while (factorial <= n) {
        result.push_back(factorial);
        i++;
        factorial *= i;
    }
    return result;
}
