#include <iostream>
using namespace std;
int main() {
    int number1, number2;
    cout << "Enter a number: ";
    cin >> number1;
    cout << "\nEnter another number: ";
    cin >> number2;
    int sum = number1 + number2;
    int difference = number1 - number2;
    int product = number1 * number2;
    int quotient = number1 / number2;
    cout << "\nThe sum of " << number1 << " and " << number2 << " is: " << sum;
    cout << "\nThe difference of " << number1 << " and " << number2 << " is: " << difference;
    cout << "\nThe product of " << number1 << " and " << number2 << " is: " << product;
    cout << "\nThe quotient of " << number1 << " and " << number2 << " is: " << quotient;
    cout << "\nThe multiplication table of " << number1 << " is: ";
    cout << "\n" << number1 << " x 1 = " << number1 * 1;
    cout << "\n" << number1 << " x 2 = " << number1 * 2;
    cout << "\n" << number1 << " x 3 = " << number1 * 3;
    cout << "\n" << number1 << " x 4 = " << number1 * 4;
    cout << "\n" << number1 << " x 5 = " << number1 * 5;
    return 0;
}