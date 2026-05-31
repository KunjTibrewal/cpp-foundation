#include<iostream>
using namespace std;

int fibonacci(int n){
    switch(n){
        case 0: return 0;
        case 1: return 1;
    }
    return fibonacci(n-1)+fibonacci(n-2);
}

int main(){
    int num;
    cout << "Fibonacci series: 0, 1, 1, 2, 3, 5, 8, 13, 21...";
    cout << endl << "Enter position: ";
    cin >> num;
    cout << endl << "The number at " << num << "th position in the fibonacci sequence is: " << fibonacci(num);
    return 0;
}