#include<iostream>
using namespace std;

int main(){
    //structures: it stores different types of data
    typedef struct student {
        int roll;
        float percentage;
        char section;
    } st;
    student Kunj;
    st Lakshya;
    cout << "Enter Kunj's details(roll, percentange, section): ";
    cin >> Kunj.roll >> Kunj.percentage >> Kunj.section;
    cout << "\nEnter Lakshya's details(roll, percentange, section): ";
    cin >> Lakshya.roll >> Lakshya.percentage >> Lakshya.section;

    //union: it stores different data which can be used one at a time only(better memory management)
    union college{
        char hostel, transport;
    };
    college Aditya;
    cout << "\nEnter Hostel Block: ";
    cin >> Aditya.hostel;
    cout << "\nEnter Transport: ";
    cin >> Aditya.transport;
    cout << endl << Aditya.hostel;   //will print transport 
    cout << endl << Aditya.transport;

    //enum: assigns word to constant integers, makes the program readable
    enum status {approved, rejected, pending};
    status visa = approved; 
    status pan = rejected;
    cout << endl << visa; //output 0
    return 0;
}