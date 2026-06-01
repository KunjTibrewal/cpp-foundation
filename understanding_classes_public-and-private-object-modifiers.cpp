#include<iostream> 
using namespace std;

class employee{
    private:  // can not be accessed other than inside the class employee
        int salary;
        string password;        
    public: 
        int id;
        string name;
        void setDetails(int s, string p);
        void showDetails();
};

void employee::setDetails(int s, string p){
    salary = s;
    password = p;
}
void employee::showDetails(){
    cout << "The salary of the employee is: " << salary << endl;
    cout << "The password of the employee is: " << password << endl;
}
int main(){
    employee e1;
    cout << "Enter the id of the employee: ";
    cin >> e1.id;
    cout << "Enter the name of the employee: ";
    cin >> e1.name;
    // cout << "Enter the password of the employee: ";
    // cin >> e1.password;     will show error because password is a private member of the class employee
    int s;
    string p;
    cout << "Enter the salary of the employee: ";
    cin >> s;
    cout << "Enter the password of the employee: ";
    cin >> p;
    e1.setDetails(s, p);
    s= 0, p = "";
    cout << "The id of the employee is: " << e1.id << endl;
    cout << "The name of the employee is: " << e1.name << endl;
    // cout << "The salary of the employee is: " << e1.salary << endl;
    // cout << "The password of the employee is: " << e1.password << endl;    will show error because salary and password are private members of the class employee
    e1.showDetails();
    return 0;
}
