#include<iostream> 
using namespace std;
int main () {
    //printing numbers from 1 to n using break statement, skipping the numbers divisible by 3 using continue statement
    int n;
    cout<< "Enter the numnber till which you want to print the numbers: ";
    cin>> n;
    for (int i = 1; 4<5; i++){
        if (i % 3 == 0){
        continue;}   //continue statement will skip the numbers divisible by 3
        cout << i << endl;
        if (i == n ){
        break;     }//break statement will stop the loop when i is equal to n
    } 
    return 0;
}
