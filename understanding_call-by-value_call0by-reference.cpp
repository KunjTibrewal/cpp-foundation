#include<iostream> 
using namespace std;

void swap(int, int); void swapPointer(int*, int*); void swapReferenceVar(int &, int &);
int main(){
    int a, b;
    cout<< endl << "Enter two nums a, b respectively: ";
    cin >> a >> b;

    //Trying to swap by calling by values
    swap(a, b);
    cout << endl << "Trying to swap with call by value: ";
    cout << endl << "a is " << a << ". b is " << b;        // value didnt swap

    //Trying to swap by using pointers
    swapPointer(&a, &b); //instead of sending values we send address of the respective variables
    cout << endl << "Trying to swap using pointers: ";
    cout << endl << "a is " << a << ". b is " << b;       // value did swap

    //Trying to swap by calling reference variables
    swapReferenceVar(a, b);
    cout << endl << "Trying to swap by calling reference variable: ";
    cout << endl << "a is " << a << ". b is " << b;       // value swaps again
    }

void swap(int a, int b){ // expected a and b to swap, but here a and b are not the actual parameters but formal parameters, 
    int temp = a;        // any value change in formal parameters doesnt affect the actual parameters, hence value doesnt swap
    a = b;
    b = a;
}

void swapPointer(int* a, int* b){   // it took value at the given addresses
    int temp = *a;
    *a = *b;
    *b = temp;                      //we are changing values at specific address and hence the values in the main function changes too
}

void swapReferenceVar(int &a, int &b){ //we are using the concept of reference variable, as reference variable changes, actual variable does too
    int temp = a;
    a = b;
    b = temp;
}