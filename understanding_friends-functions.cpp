#include <iostream>
using namespace std;

class numbers;
int sum(numbers, numbers);

class numbers
{
    int a;

public:
    void setNumber()
    {
        cout << "Enter a number: ";
        cin >> a;
    }
    friend int sum(numbers, numbers);
};

int sum(numbers n1, numbers n2)
{                       // friend function can access all members of class
    return n1.a + n2.a; // it is not a part of the class and is not called by the object.
}

int main()
{
    numbers num1, num2;
    int result;
    num1.setNumber();
    num2.setNumber();
    result = sum(num1, num2);
    cout << "The sum of the two numbers is: " << result << endl;
    return 0;
}
