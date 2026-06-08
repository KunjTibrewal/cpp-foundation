#include <iostream>
using namespace std;

class dataStorage
{
    int data1, data2;

public:
    dataStorage()
    { // CONSTRUCTOR OVERLOADING - multiple constructors with different parameters
        data1 = 0;
        data2 = 0;
    }
    dataStorage(int a, int b = 0)
    { // DEFAULT ARGUMENTS - parameters with default values
        data1 = a;
        data2 = b;
    }
    void display()
    {
        cout << "Data 1: " << data1 << endl;
        cout << "Data 2: " << data2 << endl;
    }
};
int main()
{
    dataStorage d1;        // default constructor will be called
    dataStorage d2(5);     // parameterized constructor with default argument will be called
    dataStorage d3(5, 10); // parameterized constructor will be called

    cout << "D1: " << endl;
    d1.display();
    cout << "D2: " << endl;
    d2.display();
    cout << "D3: " << endl;
    d3.display();

    return 0;
}