Link of the Question:-
https://www.codingninjas.com/studio/problems/sum-of-even-odd_624650?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf

SOLUTION:-

#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int evenSum = 0, oddSum = 0;
    while (n > 0) {
        int digit = n % 10; // Extract the last digit
        if (digit % 2 == 0) {
            evenSum += digit; // Add to even sum if it's even
        } else {
            oddSum += digit; // Add to odd sum if it's odd
        }
        n /= 10; // Remove the last digit
    }

    cout << evenSum << " " << oddSum << endl;
    return 0;
}

