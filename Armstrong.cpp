QUESTION LINK:-
www.codingninjas.com/studio/problems/check-armstrong_589?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf


SOLUTION:-

#include <cmath>
bool checkArmstrong(int n) {
    int num = n;
    int numOfDigits = 0;
    int sum = 0;
    while (num > 0) {
        num /= 10;
        numOfDigits++;
    }
    num = n;  
    while (num > 0) {
        int digit = num % 10;
        sum += pow(digit, numOfDigits);
        num /= 10;
    }
    return sum == n;
}
