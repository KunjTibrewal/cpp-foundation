#include<iostream>
using namespace std;
//global variable
int GlobalVariable = 10;
void sum(){
    // int GlobalVariable;
    //figured out that id you declare a variable but dont give value to it, it takes random value
    cout<< "\nThis is a global variable: "<< GlobalVariable;
    /*i still dont know about functions like sum void*/
}
int main(){
    int one = 1, two = 2;
    float pi = 3.14;
    char letter = 'A';
    double pi_upto_10_decimal_places = 3.1415926535;
    bool is_true = true;
    // sum(); // Calling the function to demonstrate global variable access
    int GlobalVariable = 20; // Declaring a local variable with the same name as the global variable
    cout<< "\nOne: "<< one;
    cout<< "\nTwo: "<< two;
    cout<< "\nPi: "<< pi;
    cout<< "\nFirst alphabet: "<< letter;
    cout<< "\nPi up to 10 decimal places: "<< pi_upto_10_decimal_places << " Is it true? "<< is_true;
    sum(); // Calling the function to demonstrate global variable access
    cout<< "\nNow using local variable with same name as global variable: "<< GlobalVariable;
    return 0;
}