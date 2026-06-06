#include <iostream>
using namespace std;

class calculation;

class complexNum
{
    int a, b;

public:
    void setValues()
    {
        cout << "Enter the real and imaginary parts of the complex number: ";
        cin >> a >> b;
    }
    void display()
    {
        cout << "The complex number is: " << a << " + " << b << "i" << endl;
    }
    friend class calculation;
};

class calculation
{
public:
    void sum(complexNum c1, complexNum c2)
    {
        complexNum result;
        result.a = c1.a + c2.a;
        result.b = c1.b + c2.b;
        result.display();
    }
    void product(complexNum c1, complexNum c2)
    {
        complexNum result;
        result.a = c1.a * c2.a - c1.b * c2.b;
        result.b = c1.a * c2.b + c1.b * c2.a;
        result.display();
    }
    void difference(complexNum c1, complexNum c2)
    {
        complexNum result;
        result.a = c1.a - c2.a;
        result.b = c1.b - c2.b;
        result.display();
    }
};

int main()
{
    int choice;
    complexNum c1, c2;
    c1.setValues();
    c2.setValues();
    cout << "Choose the operation to perform: \n1. Sum\n2. Product\n3. Difference" << endl;
    cin >> choice;
    calculation calc;
    switch (choice)
    {
    case 1:
        calc.sum(c1, c2);
        break;
    case 2:
        calc.product(c1, c2);
        break;
    case 3:
        calc.difference(c1, c2);
        break;
    default:
        cout << "Invalid choice!" << endl;
        return 0;
    }
    return 0;
}