Link of the Question:-
https://www.codingninjas.com/studio/problems/switch-case-statement_8357244?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf


SOLUTION:-
  
double areaSwitchCase(int ch, vector<double> a) {
    if (ch == 1) {
        double r = a[0];
        return M_PI * r * r; // Calculate the area of a circle using πr² formula
    } else if (ch == 2) {
        double l = a[0];
        double b = a[1];
        return l * b; // Calculate the area of a rectangle using length × breadth formula
    } else {
        return -1.0; // Invalid choice
    }
}
 
