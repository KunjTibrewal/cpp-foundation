// this is a system header file
#include <iostream>
//this is a user defined header file only work when the file is in the same directory as the source file
#include "my_header.h"
using namespace std;
int main()
{
    int a, b;
    cout << "Enter a number 'a': ";
    cin >> a;
    cout <<"Enter another number 'b': ";
    cin >> b;
    //lets try using arrithmetic operators
    cout << "the sum of a and b is: " << a + b << endl;
    cout << "the difference of a and b is: " << a - b << endl;
    cout << "the product of a and b is: " << a * b << endl;
    cout << "the quotient of a/b is: " << a / b << endl;
    cout << "The remainder of a/b is: " << a % b << endl;
    cout << "a is " << a++ << endl; //a is printed first then incremented
    cout << "a+2=" << ++a << endl << endl; //a is incremented first then printed
    /*user only knows the initial value of a*/
    //same with a-- and --a for decrementing a by 1
    // lets try assignment operators
    int c = 2; // = is an assignment operator 
    // lets try comparison operators
    cout << "Is 'a' equal to 'b'? " << (a == b) << endl; //if true it will print 1 if false it will print 0
    cout << "Is 'a' not equal to 'b'? " << (a != b) << endl; 
    cout << "Is 'a' greater than 'b'? " << (a > b) << endl; 
    cout << "Is 'a' less than 'b'? " << (a < b) << endl; 
    cout << "Is 'a' greater than or equal to 'b'? " << (a >= b) << endl; 
    cout << "Is 'a' less than or equal to 'b'? " << (a <= b) << endl <<endl; 
// lets try logical operators
    cout << "Is 'a' greater than 0 AND 'b' greater than 0? " << ((a > 0) && (b > 0)) << endl; 
    cout << "Is 'a' greater than 0 OR 'b' greater than 0? " << ((a > 0) || (b > 0)) << endl;
    cout << "Is 'a' NOT greater than 0? " << !(a > 0) << endl;
    return 0;

}