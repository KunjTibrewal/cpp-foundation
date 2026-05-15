#include <iostream>
using namespace std;
int main() {
    char name[50], city[50], profession[50]; //understood how to take more than one letter input for variables
    int age;
    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter your city: ";
    cin >> city;
    cout << "Enter your profession: ";
    cin >> profession; // struggling to take two word input for profession
    cout << "\nHello, I am " << name << ". I am " << age << ". " << profession << " by profession. "
    << "I live in " << city << ". Nice to meet you all!";
    return 0;
}


