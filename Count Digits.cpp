Link of the Question:-
https://www.codingninjas.com/studio/problems/count-digits_8416387?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf

SOLUTION:-

int countDigits(int n){
	// Write your code here.
	int count = 0;
    int original_n = n;

    while (n > 0) {
        int digit = n % 10;
        if (digit != 0 && original_n % digit == 0) {
            count++;
        }
        n /= 10;
    }

    return count;
}	
