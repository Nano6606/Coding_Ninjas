QUESTION LINK:-
https://www.codingninjas.com/studio/problems/palindrome-number_624662?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf

SOLUTION:-
  
bool palindrome(int n) {
    if (n < 0 || (n % 10 == 0 && n != 0)) {
        return false;
    }

    int reversed = 0;
    while (n > reversed) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }
    return (n == reversed || n == reversed / 10);
}
