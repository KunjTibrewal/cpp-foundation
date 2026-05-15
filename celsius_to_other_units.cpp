#include <iostream>
using namespace std;
int main() {
    float celsius, fahrenheit, kelvin;
    cout << "Enter temperature in Celsius: ";
    cin >> celsius;
    fahrenheit = (celsius * 9 / 5) + 32;
    kelvin = celsius + 273;
    cout << "\nTemperature in Fahrenheit: " << fahrenheit;
    cout << "\nTemperature in Kelvin: " << kelvin;
    return 0;
}
