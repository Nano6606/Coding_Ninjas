Link of Question:
https://www.codingninjas.com/studio/problems/find-character-case_58513?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf

Solution:
#include <iostream>
using namespace std;

int main() {
    char character;
    cin >> character;

    int result = -1; // Default value for characters that are not alphabets

    // Check if the character is an uppercase alphabet
    if (character >= 'A' && character <= 'Z') {
        result = 1;
    }
    // Check if the character is a lowercase alphabet
    else if (character >= 'a' && character <= 'z') {
        result = 0;
    }

    cout << result << endl;

    return 0;
}
