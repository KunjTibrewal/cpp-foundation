#include<iostream>
using namespace std;

int factorial(int);
int main(){
    int num;
    cout << "Enter a number you want to find factorial of: ";
    cin >> num;
    while (num < 0){
        cout << "Enter a postive number: ";
        cin >> num;
    }
        cout << num << "! = " << factorial(num); return 0;
    }
int factorial(int a){
    switch (a){
        case 0: return 1;
    }
    return a* factorial(a-1);
    }