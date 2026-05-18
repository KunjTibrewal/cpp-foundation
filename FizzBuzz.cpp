#include<iostream>
using namespace std;
//print the numbers from 1 to 100. But for multiples of 3 print "Fizz" instead of the number and for the multiples of 5 print "Buzz". For multiples of both 3, 5 print "FizzBuzz"
int main(){
    for (int i=1; i<=100; i++){
        if (i%15==0){
        cout << "FizzBuzz"<<endl;}
        else if (i%3==0){
        cout << "Fizz"<<endl;}
        else if (i%5==0){
        cout << "Buzz"<<endl;}
        else{ cout << i << endl;}
    }
}