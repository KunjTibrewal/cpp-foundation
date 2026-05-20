#include<iostream>
using namespace std;

//function prototypes
int multiply(int, int); //assuring compiler that theres a function multiply
void greet();

int main(){
    int num1, num2;
    greet();
    cout << endl << "Enter two numbers which you want to multiply: ";
    cin >> num1 >> num2;
    cout << endl << "The product is: " << multiply(num1, num2);
    //num1 and num2 are actual parameters
    return 0;
}
int multiply(int a, int b){
    int product = a*b;
    return product;
}
void greet(){
    cout << "Hello, Welcome To The Program";
}