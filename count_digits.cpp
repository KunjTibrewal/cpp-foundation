#include<iostream>
using namespace std;

int main(){ 
    int number, count = 0;
    cout << "Enter a number: ";
    cin >> number; 
    switch (number){ 
        case 0: count = 1;
    }
    while (number != 0){
        number = number / 10;
        count++;
    }
    cout << "The no. of digits in the number is: " << count << endl;
    return 0;
}