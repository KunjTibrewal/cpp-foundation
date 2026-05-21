#include <iostream>
using namespace std;

int main(){
    float num1, num2; 
    int initial;
    char operation;
    while (true){
    cout << "\n1. Start\n2. Exit: ";
    cin >> initial;
    switch (initial) {
        case 2: return 0;
    }
    cout << "\nEnter number 1: ";
    cin >> num1;
    cout << "\nEnter operation(+,-,x,/): ";
    cin >> operation;
    while (operation != '+' && operation != '-' && operation != 'x' && operation != '/'){
        cout << "\nEnter valid operation number assigned to the operation: ";
        cin >> operation;
    }
    cout << "\nEnter number 2: ";
    cin >> num2;
    switch (operation){
        case '+': cout << "="<<num1+num2; break;
        case '-': cout << "="<< num1-num2; break;
        case 'x': cout << "=" << num1*num2; break;
        case '/': if (num2==0){
            cout << "\nUndefined"; break; }
            cout << "=" << num1/num2; break;
    }
    }
}