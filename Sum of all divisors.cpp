QUESTION LINK:-
https://www.codingninjas.com/studio/problems/sum-of-all-divisors_8360720?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf

  
SOLUTION:-

#include <cmath>
int sumOfAllDivisors(int n) {
    int result = 0;

    for (int i = 1; i <= n; ++i) {
        result += (n / i) * i;
    }

    return result;
}
