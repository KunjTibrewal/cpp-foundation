#include<iostream>
#include<iomanip>
using namespace std;
/*student_profile[0] = maths
student_profile[1] = physics
student_profile[2] = chemistry
student_profile[3] = english
student_profile[4] = computer science
student_profile[5] = percentage*/
int main(){
    int student_profile_1[6], student_profile_2[6], student_profile_3[6], student_profile_4[6], student_profile_5[6];
    char student_name_1[20], student_name_2[20], student_name_3[20], student_name_4[20], student_name_5[20];
    char student_1_grade, student_2_grade, student_3_grade, student_4_grade, student_5_grade;

    //taking students details

    cout << "Enter the name of student 1: ";
    cin >> student_name_1;
    cout << "\nEnter the marks of maths, physics, chemistry, english, computer science for student 1: ";
    cin >> student_profile_1[0] >> student_profile_1[1] >> student_profile_1[2] >> student_profile_1[3] >> student_profile_1[4];
    cout << "Enter the name of student 2: ";
    cin >> student_name_2;
    cout << "\nEnter the marks of maths, physics, chemistry, english, computer science for student 2: ";
    cin >> student_profile_2[0] >> student_profile_2[1] >> student_profile_2[2] >> student_profile_2[3] >> student_profile_2[4];
    cout << "Enter the name of student 3: ";
    cin >> student_name_3;
    cout << "\nEnter the marks of maths, physics, chemistry, english, computer science for student 3: ";
    cin >> student_profile_3[0] >> student_profile_3[1] >> student_profile_3[2] >> student_profile_3[3] >> student_profile_3[4];
    cout << "Enter the name of student 4: ";
    cin >> student_name_4;
    cout << "\nEnter the marks of maths, physics, chemistry, english, computer science for student 4: ";
    cin >> student_profile_4[0] >> student_profile_4[1] >> student_profile_4[2] >> student_profile_4[3] >> student_profile_4[4];
    cout << "Enter the name of student 5: ";
    cin >> student_name_5;
    cout << "\nEnter the marks of maths, physics, chemistry, english, computer science for student 5: ";
    cin >> student_profile_5[0] >> student_profile_5[1] >> student_profile_5[2] >> student_profile_5[3] >> student_profile_5[4];

    // percentage calculation

    student_profile_1[5] = 0;
    student_profile_2[5] = 0;
    student_profile_3[5] = 0;
    student_profile_4[5] = 0;
    student_profile_5[5] = 0;

    for (int i = 0; i < 5; i++){
        student_profile_1[5] = student_profile_1[5] + student_profile_1[i];
        student_profile_2[5] = student_profile_2[5] + student_profile_2[i];
        student_profile_3[5] = student_profile_3[5] + student_profile_3[i];
        student_profile_4[5] = student_profile_4[5] + student_profile_4[i];
        student_profile_5[5] = student_profile_5[5] + student_profile_5[i];
    }
    student_profile_1[5] = student_profile_1[5] / 5;
    student_profile_2[5] = student_profile_2[5] / 5;
    student_profile_3[5] = student_profile_3[5] / 5;
    student_profile_4[5] = student_profile_4[5] / 5;
    student_profile_5[5] = student_profile_5[5] / 5;

    //grading students

    if (student_profile_1[5] >= 80){
        student_1_grade = 'A';
    } else if (student_profile_1[5] >= 65){
        student_1_grade = 'B';
    } else if (student_profile_1[5] >= 50){
        student_1_grade = 'C';
    } else if (student_profile_1[5] >= 33){
        student_1_grade = 'D';
    } else {
        student_1_grade = 'F';
    }
    if (student_profile_2[5] >= 80){
        student_2_grade = 'A';
    } else if (student_profile_2[5] >= 65){
        student_2_grade = 'B';
    } else if (student_profile_2[5] >= 50){
        student_2_grade = 'C';
    } else if (student_profile_2[5] >= 33){
        student_2_grade = 'D';
    } else {
        student_2_grade = 'F';
    }
    if (student_profile_3[5] >= 80){
        student_3_grade = 'A';
    } else if (student_profile_3[5] >= 65){
        student_3_grade = 'B';
    } else if (student_profile_3[5] >= 50){
        student_3_grade = 'C';
    } else if (student_profile_3[5] >= 33){
        student_3_grade = 'D';
    } else {
        student_3_grade = 'F';
    }
    if (student_profile_4[5] >= 80){
        student_4_grade = 'A';
    } else if (student_profile_4[5] >= 65){
        student_4_grade = 'B';
    } else if (student_profile_4[5] >= 50){
        student_4_grade = 'C';
    } else if (student_profile_4[5] >= 33){
        student_4_grade = 'D';
    } else {
        student_4_grade = 'F';
    }
    if (student_profile_5[5] >= 80){
        student_5_grade = 'A';
    } else if (student_profile_5[5] >= 65){
        student_5_grade = 'B';
    } else if (student_profile_5[5] >= 50){
        student_5_grade = 'C';
    } else if (student_profile_5[5] >= 33){
        student_5_grade = 'D';
    } else {
        student_5_grade = 'F';
    }

//Student Profile Summary Output

    cout << endl << setw(20) << "Student Name" << setw(20) << "Percentage" << setw(20) << "Grade";
    cout << endl << setw(20) << student_name_1 << setw(20) << student_profile_1[5] << "%" << setw(20) << student_1_grade;
    cout << endl << setw(20) << student_name_2 << setw(20) << student_profile_2[5] << "%" << setw(20) << student_2_grade;
    cout << endl << setw(20) << student_name_3 << setw(20) << student_profile_3[5] << "%" << setw(20) << student_3_grade;
    cout << endl << setw(20) << student_name_4 << setw(20) << student_profile_4[5] << "%" << setw(20) << student_4_grade;
    cout << endl << setw(20) << student_name_5 << setw(20) << student_profile_5[5] << "%" << setw(20) << student_5_grade;

//topper of the class

    if (student_profile_1[5] > student_profile_2[5] && student_profile_1[5] > student_profile_3[5] && student_profile_1[5] > student_profile_4[5] && student_profile_1[5] > student_profile_5[5]){
       cout << "\n\nThe Topper of the class is: " << student_name_1 << " with a percentage of " << student_profile_1[5] << "%" << endl;
    } else if (student_profile_2[5] > student_profile_1[5] && student_profile_2[5] > student_profile_3[5] && student_profile_2[5] > student_profile_4[5] && student_profile_2[5] > student_profile_5[5]){
        cout << "\n\nThe Topper of the class is: " << student_name_2 << " with a percentage of " << student_profile_2[5] << "%" << endl;
    } else if (student_profile_3[5] > student_profile_1[5] && student_profile_3[5] > student_profile_2[5] && student_profile_3[5] > student_profile_4[5] && student_profile_3[5] > student_profile_5[5]){
        cout << "\n\nThe Topper of the class is: " << student_name_3 << " with a percentage of " << student_profile_3[5] << "%" << endl;
    } else if (student_profile_4[5] > student_profile_1[5] && student_profile_4[5] > student_profile_2[5] && student_profile_4[5] > student_profile_3[5] && student_profile_4[5] > student_profile_5[5]){
        cout << "\n\nThe Topper of the class is: " << student_name_4 << " with a percentage of " << student_profile_4[5] << "%" << endl;
    } else{
        cout << "\n\nThe Topper of the class is: " << student_name_5 << " with a percentage of " << student_profile_5[5] << "%" << endl;
    }

//Passing percentage of the class

    int pass_count = 0;
    if (student_1_grade != 'F'){
        pass_count++;
    }
    if (student_2_grade != 'F'){
        pass_count++;
    }
    if (student_3_grade != 'F'){
        pass_count++;
    }
    if (student_4_grade != 'F'){
        pass_count++;
    }
    if (student_5_grade != 'F'){
        pass_count++;
    }

    double passing_percentage = (pass_count/5.0)*100;
    cout << "\n\nPassing Percentage of the class: " << passing_percentage << "%" << endl;

//Subject-wise toppers

    //maths topper
    if (student_profile_1[0] > student_profile_2[0] && student_profile_1[0] > student_profile_3[0] && student_profile_1[0] > student_profile_4[0] && student_profile_1[0] > student_profile_5[0]){
       cout << "\n\nThe Topper in Maths is: " << student_name_1 << " with a score of " << student_profile_1[0] << endl;
    } else if (student_profile_2[0] > student_profile_1[0] && student_profile_2[0] > student_profile_3[0] && student_profile_2[0] > student_profile_4[0] && student_profile_2[0] > student_profile_5[0]){
        cout << "\n\nThe Topper in Maths is: " << student_name_2 << " with a score of " << student_profile_2[0] << endl;
    } else if (student_profile_3[0] > student_profile_1[0] && student_profile_3[0] > student_profile_2[0] && student_profile_3[0] > student_profile_4[0] && student_profile_3[0] > student_profile_5[0]){
        cout << "\n\nThe Topper in Maths is: " << student_name_3 << " with a score of " << student_profile_3[0] << endl;
    } else if (student_profile_4[0] > student_profile_1[0] && student_profile_4[0] > student_profile_2[0] && student_profile_4[0] > student_profile_3[0] && student_profile_4[0] > student_profile_5[0]){
        cout << "\n\nThe Topper in Maths is: " << student_name_4 << " with a score of " << student_profile_4[0] << endl;
    } else{
        cout << "\n\nThe Topper in Maths is: " << student_name_5 << " with a score of " << student_profile_5[0] << endl;
    }

    //physics topper
    if (student_profile_1[1] > student_profile_2[1] && student_profile_1[1] > student_profile_3[1] && student_profile_1[1] > student_profile_4[1] && student_profile_1[1] > student_profile_5[1]){
       cout << "\n\nThe Topper in Physics is: " << student_name_1 << " with a score of " << student_profile_1[1] << endl;
    } else if (student_profile_2[1] > student_profile_1[1] && student_profile_2[1] > student_profile_3[1] && student_profile_2[1] > student_profile_4[1] && student_profile_2[1] > student_profile_5[1]){
        cout << "\n\nThe Topper in Physics is: " << student_name_2 << " with a score of " << student_profile_2[1] << endl;
    } else if (student_profile_3[1] > student_profile_1[1] && student_profile_3[1] > student_profile_2[1] && student_profile_3[1] > student_profile_4[1] && student_profile_3[1] > student_profile_5[1]){
        cout << "\n\nThe Topper in Physics is: " << student_name_3 << " with a score of " << student_profile_3[1] << endl;
    } else if (student_profile_4[1] > student_profile_1[1] && student_profile_4[1] > student_profile_2[1] && student_profile_4[1] > student_profile_3[1] && student_profile_4[1] > student_profile_5[1]){
        cout << "\n\nThe Topper in Physics is: " << student_name_4 << " with a score of " << student_profile_4[1] << endl;
    } else{
        cout << "\n\nThe Topper in Physics is: " << student_name_5 << " with a score of " << student_profile_5[1] << endl;
    }

    //chemistry topper
    if (student_profile_1[2] > student_profile_2[2] && student_profile_1[2] > student_profile_3[2] && student_profile_1[2] > student_profile_4[2] && student_profile_1[2] > student_profile_5[2]){
       cout << "\n\nThe Topper in Chemistry is: " << student_name_1 << " with a score of " << student_profile_1[2] << endl;
    } else if (student_profile_2[2] > student_profile_1[2] && student_profile_2[2] > student_profile_3[2] && student_profile_2[2] > student_profile_4[2] && student_profile_2[2] > student_profile_5[2]){
        cout << "\n\nThe Topper in Chemistry is: " << student_name_2 << " with a score of " << student_profile_2[2] << endl;
    } else if (student_profile_3[2] > student_profile_1[2] && student_profile_3[2] > student_profile_2[2] && student_profile_3[2] > student_profile_4[2] && student_profile_3[2] > student_profile_5[2]){
        cout << "\n\nThe Topper in Chemistry is: " << student_name_3 << " with a score of " << student_profile_3[2] << endl;
    } else if (student_profile_4[2] > student_profile_1[2] && student_profile_4[2] > student_profile_2[2] && student_profile_4[2] > student_profile_3[2] && student_profile_4[2] > student_profile_5[2]){
        cout << "\n\nThe Topper in Chemistry is: " << student_name_4 << " with a score of " << student_profile_4[2] << endl;
    } else{
        cout << "\n\nThe Topper in Chemistry is: " << student_name_5 << " with a score of " << student_profile_5[2] << endl;
    }

    //english topper
    if (student_profile_1[3] > student_profile_2[3] && student_profile_1[3] > student_profile_3[3] && student_profile_1[3] > student_profile_4[3] && student_profile_1[3] > student_profile_5[3]){
       cout << "\n\nThe Topper in English is: " << student_name_1 << " with a score of " << student_profile_1[3] << endl;
    } else if (student_profile_2[3] > student_profile_1[3] && student_profile_2[3] > student_profile_3[3] && student_profile_2[3] > student_profile_4[3] && student_profile_2[3] > student_profile_5[3]){
        cout << "\n\nThe Topper in English is: " << student_name_2 << " with a score of " << student_profile_2[3] << endl;
    } else if (student_profile_3[3] > student_profile_1[3] && student_profile_3[3] > student_profile_2[3] && student_profile_3[3] > student_profile_4[3] && student_profile_3[3] > student_profile_5[3]){
        cout << "\n\nThe Topper in English is: " << student_name_3 << " with a score of " << student_profile_3[3] << endl;
    } else if (student_profile_4[3] > student_profile_1[3] && student_profile_4[3] > student_profile_2[3] && student_profile_4[3] > student_profile_3[3] && student_profile_4[3] > student_profile_5[3]){
        cout << "\n\nThe Topper in English is: " << student_name_4 << " with a score of " << student_profile_4[3] << endl;
    } else{
        cout << "\n\nThe Topper in English is: " << student_name_5 << " with a score of " << student_profile_5[3] << endl;
    }

    //computer science topper
    if (student_profile_1[4] > student_profile_2[4] && student_profile_1[4] > student_profile_3[4] && student_profile_1[4] > student_profile_4[4] && student_profile_1[4] > student_profile_5[4]){
       cout << "\n\nThe Topper in Computer Science is: " << student_name_1 << " with a score of " << student_profile_1[4] << endl;
    } else if (student_profile_2[4] > student_profile_1[4] && student_profile_2[4] > student_profile_3[4] && student_profile_2[4] > student_profile_4[4] && student_profile_2[4] > student_profile_5[4]){
        cout << "\n\nThe Topper in Computer Science is: " << student_name_2 << " with a score of " << student_profile_2[4] << endl;
    } else if (student_profile_3[4] > student_profile_1[4] && student_profile_3[4] > student_profile_2[4] && student_profile_3[4] > student_profile_4[4] && student_profile_3[4] > student_profile_5[4]){
        cout << "\n\nThe Topper in Computer Science is: " << student_name_3 << " with a score of " << student_profile_3[4] << endl;
    } else if (student_profile_4[4] > student_profile_1[4] && student_profile_4[4] > student_profile_2[4] && student_profile_4[4] > student_profile_3[4] && student_profile_4[4] > student_profile_5[4]){
        cout << "\n\nThe Topper in Computer Science is: " << student_name_4 << " with a score of " << student_profile_4[4] << endl;
    } else{
        cout << "\n\nThe Topper in Computer Science is: " << student_name_5 << " with a score of " << student_profile_5[4] << endl;
    }


    return 0;
}