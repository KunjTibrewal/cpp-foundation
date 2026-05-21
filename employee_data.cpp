#include<iostream>
using namespace std;

typedef struct employee{
        int id, salary;
    } e;

int average_salary(e person[], int n);
int main(){
    int num_of_employee;
    cout << "Enter no. of employees: ";
    cin >> num_of_employee;
    e person[num_of_employee];
    for (int i=0; i < num_of_employee; i++){
        cout << "\nEnter id of employee no. " << i+1 << ": ";
        cin >> person[i].id;
        cout << "\nEnter salary: $";
        cin >> person[i].salary;
    }
    cout << "Average Salary: $" << average_salary(person, num_of_employee);
}
int average_salary(e person[], int n){
    int total = 0;
    for (int i=0; i<n; i++){
    total = total + person[i].salary;
    }
    return total/n;
}