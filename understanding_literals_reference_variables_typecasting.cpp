#include<iostream>
using namespace std;
int main(){
    //literals 
    float pi = 3.14f; //f is used to specify that the literal is a float
    long double pi_double = 3.14l; //l is used to specify that the literal is a long double
    
    //reference variables:  one variable with two names
    int a;
    cout << "Enter a number 'a': ";
    cin >> a;
    int & b = a; //b is a reference variable that refers to a
    cout << "The value of a is: " << b << endl;

    //typecasting: converting one data type to another
    cout << "The greatest integer function of pi is: " << int(pi) << endl; 
    return 0; 
}

