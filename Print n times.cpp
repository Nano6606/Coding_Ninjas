QUESTION LINK:-
https://www.codingninjas.com/studio/problems/-print-n-times_8380707?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf


SOLUTION:-
#include <vector>
#include <iostream>
void printN(int n) {
    if (n > 0) {
        std::cout << "Coding Ninjas ";
        printN(n - 1);
    }
}

std::vector<std::string> printNTimes(int n) {
    std::vector<std::string> result;
    printN(n);
    return result;
}

