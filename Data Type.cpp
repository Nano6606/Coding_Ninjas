Link of the Question:-
https://www.codingninjas.com/studio/problems/data-type_8357232?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf

SOLUTION:-
  
#include <iostream>
#include <string>
using namespace std;

int dataTypes(string type) {
    if (type == "Integer") {
        return 4;
    } else if (type == "Long") {
        return 8;
    } else if (type == "Float") {
        return 4;
    } else if (type == "Double") {
        return 8;
    } else if (type == "Character") {
        return 1;
    } else {
        return -1; // Invalid data type
    }
}
