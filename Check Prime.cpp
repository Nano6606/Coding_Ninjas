QUESTION LINK:-
https://www.codingninjas.com/studio/problems/check-prime_624934?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf


SOLUTION:-

#include <cmath>
bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }

    int sqrt_n = sqrt(n);

    for (int i = 2; i <= sqrt_n; ++i) {
        if (n % i == 0) {
            return false; 
        }
    }

    return true; 
}
