#include<iostream>
#include<iomanip>

using namespace std;
int main() {
    //lets try multiplication table using the three loops 1 to 5 from for loop, 5 to 10 from while loop and 10 to 15 from do-while loop
int number;
cout<<"Enter the number for which you want to print the multiplication table: ";
cin>>number;
int i;
for (i=1; i<=5;i++){ //for (initialization; condition; updation) for infinite loop condition is always true
    cout <<endl << number<<"x"<<setw(2)<<i<<"="<<setw(3)<<number*i; //if you define i inside the for loop then it will be out of scope outside the loop and you will get an error
}
while (i<=10){
    cout <<endl << number<<"x"<<setw(2)<<i<<"="<<setw(3)<<number*i;
    i++;
}
do { 
    cout <<endl << number<<"x"<<setw(2)<<i<<"="<<setw(3)<<number*i;
    i++;
} while (i>=12 && i<=15);   //do-while loop will execute the body of the loop at least once even if the condition is false
    return 0;
}
