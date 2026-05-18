#include <iostream>
#include <iomanip>
using namespace std;    
int main() {
    int number, prime;
    cout << "Enter a number: ";
    cin >> number;
    for (int i = 2; i <= number-1 ; i++){
        if (number % i == 0){
            prime = 3;     //not prime
            break;
    } else {
            prime = 4;    //prime
               } }
    switch (number) {
        case 0:
           prime = 0; //neither prime nor composite number is 0
           break;
        case 1:
            prime = 1;    //neither prime nor composite number is 1
            break;
            default: break; }
   if (prime == 4){
        cout << number << " is a prime number." << endl;
    } else if (prime == 1) {
        cout << number << " is neither a prime number nor a composite number. It is an unit number" << endl;
    } else if (prime == 0) {
        cout << number << " is neither a prime number nor a composite number. It is a zero number" << endl;
    } else {
        cout << number << " is a composite number." << endl;
    }
    return 0;
}