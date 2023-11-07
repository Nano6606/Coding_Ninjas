Link of the Question:-
https://www.codingninjas.com/studio/problems/nth-fibonacci-number_74156?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf

SOLUTION:-

#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int fib1 = 1, fib2 = 1, fib = 1;

    if (n == 1 || n == 2) {
        cout << 1 << endl;
    } else {
        for (int i = 3; i <= n; i++) {
            fib = fib1 + fib2;
            fib1 = fib2;
            fib2 = fib;
        }

        cout << fib << endl;
    }

    return 0;
}
