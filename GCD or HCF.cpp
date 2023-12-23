QUESTION LINK:-
https://www.codingninjas.com/studio/problems/hcf-and-lcm_840448?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf

SOLUTION:-

int calcGCD(int n, int m) {
    if (n < m) {
        std::swap(n, m);
    }

    while (m != 0) {
        int temp = m;
        m = n % m;
        n = temp;
    }

    return n;
}

