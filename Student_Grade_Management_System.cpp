#include<iostream>
#include<iomanip>
using namespace std;
/*student_marks[x][0] = maths
student_marks[x][1] = physics
student_marks[x][2] = chemistry
student_marks[x][3] = english
student_marks[x][4] = computer science 
x is student number */

int main(){
    int x;
     cout << "Enter number of students: ";
    cin >> x;

    int student_marks[x][5], student_roll[x];
    float percentage[x];
    char student_grade[x];

    //taking students details

    for (int i=0; i<x; i++) {
    cout << "\nEnter the roll no. of student: ";
    cin >> student_roll[i];
    cout << "\nEnter marks in maths, physics, chemistry, english, computer science respectively: ";
    for (int j=0; j<5; j++){
        cin>> student_marks[i][j];
    }
    }

    // percentage calculation

    for(int k=0; k<x; k++){
        percentage[k] = 0;
    }

    for (int m = 0; m < x; m++){
        for (int n = 0; n <5; n++) {
            percentage[m] = percentage[m]+student_marks[m][n];
        }
    }

    for (int l = 0; l<x; l++){
    percentage[l] = percentage[l] / 5.0;
    }

    //grading students

    for (int o=0; o<x; o++){
    if (percentage[o] >= 80){
        student_grade[o] = 'A';
    } else if (percentage[o] >= 65){
        student_grade[o] = 'B';
    } else if (percentage[o] >= 50){
        student_grade[o] = 'C';
    } else if (percentage[o] >= 33){
        student_grade[o] = 'D';
    } else {
        student_grade[o] = 'F';
    }
    }

//Student Profile Summary Output

    cout << endl << setw(20) << "Student Roll No." << setw(20) << "Percentage" << setw(20) << "Grade";
    for (int p=0; p<x; p++){
    cout << endl << setw(20) << student_roll[p] << setw(20) << percentage[p] << "%" << setw(20) << student_grade[p];
    }

//topper of the class

    float topper_percentage = 0;
    for(int q=0; q<x; q++){
        if (topper_percentage <= percentage[q]){
            topper_percentage = percentage[q];
        }
    }

    cout << endl <<"Toppers of the class: ";
    for (int r=0; r<x; r++){

    if (topper_percentage == percentage[r]){
        cout << endl << "Roll no. " << student_roll[r];
    }
    }
    cout<< endl <<"Percentage: " << topper_percentage;
//Passing percentage of the class

    int pass_count = 0;
    for (int s=0; s<x; s++) {
    if (student_grade[s] != 'F'){
        pass_count++;
    }
    }

    double passing_percentage = (pass_count*100.00)/x;
    cout << "\n\nPassing Percentage of the class: " << passing_percentage << "%" << endl;

//Subject-wise toppers

    int subject_highest[5];
    for (int t= 0; t<5; t++){
        subject_highest[t] = 0;
    }
    cout << endl <<"Subject 1 is Maths\nSubject 2 is Physics\nSubject 3 is Chemistry\nSubject 4 is English\nSubject 5 is Computer Science";
    
    for (int z=0; z<5; z++){
        for(int u=0; u<x; u++){
    if (student_marks[u][z] >= subject_highest[z]){
        subject_highest[z] = student_marks[u][z];
    }
    }
    cout<<endl << "Topper of Subject " <<z+1 <<":";
    for (int v = 0; v<x; v++){
        if (subject_highest[z] == student_marks[v][z]){
       cout << endl << "Roll No. "<< student_roll[v];
        }
    }
    cout <<endl << "Score: " << subject_highest[z];
    }

    return 0;
}