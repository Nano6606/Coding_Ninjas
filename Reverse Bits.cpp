QUESTION LINK:- 
https://www.codingninjas.com/studio/problems/reverse-bits_2181102?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf


SOLUTION:-
#include <iostream>
#include <cstdint>

uint32_t reverseBits(uint32_t n) {
    uint32_t result = 0;
    for (int i = 0; i < 32; ++i) {
        result <<= 1;
        if (n & 1) {
            result |= 1;
        }
        n >>= 1;
    }
    return result;
}

void calculateTicketPrices(int numCases, uint32_t numbers[]) {
    for (int i = 0; i < numCases; ++i) {
        uint32_t reversedNumber = reverseBits(numbers[i]);
        std::cout << reversedNumber << std::endl;
    }
}
