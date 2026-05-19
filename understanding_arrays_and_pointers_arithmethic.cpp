#include<iostream>
using namespace std; 

int main() {
    int Marks[5], total, percentage;
    cout << "Enter the marks of 5 subjects: ";
    cin >> Marks[0] >> Marks[1] >> Marks[2] >> Marks[3] >> Marks[4];
    for (int i = 0; i < 5; i++){
        if (Marks[i] > 100 || Marks[i] < 0) {
            cout << "Invalid input! Please enter marks between 0 and 100." << endl;
            return 0; // Exit the program with an error code
        }
    }
    total = Marks[0] + Marks[1] + Marks[2] + Marks[3] + Marks[4];
    percentage = total / 5;
    cout << "\nYou scored " << percentage << "% in your exams." << endl;
    if(percentage >= 33){
        cout << "Congratulations! You have passed the exams." << endl;
    }
    else{
        cout << "Sorry! You have failed the exams." << endl;
    }

    //trying pointer arithmetic with arrays
    int* pointer = Marks; 
    int i = 0;
    while ( i < 5) {
        cout << "Address of Marks[" << i << "] is: " << pointer+i << "and its value is: " << *(pointer+i) << endl; 
        i++;
    }
    return 0;
}