#include<iostream>
using namespace std;
class applicant{
    private: int age;
        void age_verification();
    public: void set_age();
}; 

int main(){
    applicant a;
    a.set_age();
    return 0;
}

void applicant::set_age(){
    cout << "Enter your age: ";
    cin >> age; 
    age_verification();                //age_verification() is a private member function and cannot be called from outside the class.
}                                      //This is an example of nesting of member functions in C++.  

void applicant::age_verification(){
    if (age < 18){
        cout << "Sorry! You are not eligible to apply for this job.";
    }
    else{
        cout << "Congratulations! You are eligible to apply for this job.";
    }
}