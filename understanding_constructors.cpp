#include <iostream>
using namespace std;
class complexNum
{
    int real, imaginary;

public:
    complexNum(void); // same name as the class
    friend void printSum(complexNum o1, complexNum o2);
};
void printSum(complexNum o1, complexNum o2)
{
    cout << "The sum is " << o1.real + o2.real << " + " << o1.imaginary + o2.imaginary << "i" << endl;
}
complexNum::complexNum(void)
{                                                                        // automatically invoked
    cout << "Enter the real and imaginary part of the complex number: "; // Used to initialize the data members of the class using constructor
    cin >> real >> imaginary;                                            // do not return values
} // we cannot refer to their address
int main()
{
    complexNum c1, c2;
    printSum(c1, c2);
    return 0;
}