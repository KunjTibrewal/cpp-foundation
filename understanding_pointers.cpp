#include<iostream>
using namespace std;

int main() {
    //Pointers are data types which store address of other data types
    int a = 10;
    int* Pointer = &a; // Pointer is storing the address of 'a' 
    cout << "The address of a is: " << Pointer << endl
    << "The address of a is: " << &a << endl       // & is used to get the address of a variable
    << "The value of a is: " << *Pointer << endl    // * is used to access the value stored in the address stored in Pointer
    << "The value of a is: " << a << endl;


    //pointer to pointer 
    int** Pointer_To_Pointer = &Pointer; // Pointer_to_Pointer is storing the address of Pointer which is storing the address of 'a'
    cout << "The address of Pointer is: " << Pointer_To_Pointer << endl
    << "The address of Pointer is: " << &Pointer << endl
    << "The value of Pointer is: " << *Pointer_To_Pointer << endl // * is used to access the value stored in the address stored in Pointer_to_Pointer which is the address of 'a'
    << "The value of a is: " << **Pointer_To_Pointer << endl; // ** is used to access the value stored in the address stored in Pointer_to_Pointer, which is the value of 'a'
return 0;
}