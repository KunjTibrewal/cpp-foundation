#include<iostream>
#include<iomanip> // for manipulator setw

using namespace std;
int main () {
    int x = 3;
    const int y = 1000;
    // x is a variable, y is a constant
    cout << "Value of x: " <<setw(4) << x << endl;
    cout << "Value of y: " <<setw(4) << y << endl;  //set width to 4 for better formatting
    x = 20; // we can change the value of x
    // y = 2000; // error: cannot assign to a variable that is const
        cout << "New value of x: " <<setw(4) << x << endl;
        cout << "New value of y: " <<setw(4) << y << endl;

    // Operator precedence example
    int a = 10, b = 5, c = 2;
    int result = a+b*c; // multiplication has higher precedence than addition
    int result2 = (a+b)*c; // parentheses change the order of evaluation
    cout << "Result of (a+b)*c: " <<setw(3) << result2 << endl; // Output: 30
    cout << setw(3) << "Result of a+b*c:   " << result << endl; // Output: 20
    // trying to put setw at different locations to see how it affects the output
    //understood setw only affects the next output operation
        return 0;
}