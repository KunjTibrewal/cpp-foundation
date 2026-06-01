#include<iostream> 
using namespace std;

class employee{
    private:
        int sallary;
        string password;
    public: 
        int id;
        string name;
        void setDetails(int s, string p);
        void showDetails();
};

void employee::setDetails(int s, string p){
    sallary = s;
    password = p;
}
void employee::showDetails(){
    cout << "The id of the employee is: " << id << endl;
    cout << "The name of the employee is: " << name << endl;
    cout << "The sallary of the employee is: " << sallary << endl;
    cout << "The password of the employee is: " << password << endl;
}
int main(){
    employee e1;
    cout << "Enter the id of the employee: ";
    cin >> e1.id;
    cout << "Enter the name of the employee: ";
    cin >> e1.name;
    int s;
    string p;
    cout << "Enter the sallary of the employee: ";
    cin >> s;
    cout << "Enter the password of the employee: ";
    cin >> p;
    e1.setDetails(s, p);
    cout << "The id of the employee is: " << e1.id << endl;
    cout << "The name of the employee is: " << e1.name << endl;
    // cout << "The sallary of the employee is: " << e1.sallary << endl;
    // cout << "The password of the employee is: " << e1.password << endl;
    e1.showDetails();
    return 0;
}
