#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

struct bank{
    string name, password;
    int account_number;
    float balance;
    bool locked;
};
struct loan{
    string name;
    float amount, amount_to_be_paid_back; 
    int id;
    bool active;
};
int no_of_users = 0, no_of_loans = 0;
bank user[10];
loan loan_num[10];

int create_account();
int login();
int deposit(int);
int withdraw(int);
int transfer(int);
int change_password(int);
int take_loan();
int repay_loan();
int manager();


int main(){ 
    int initial, loan_initial;
    while (true){
    cout << "\nWelcome To The C++ Bank";
    cout << "\n1. Create Account\n2. Login\n3. Loan\n4. Manager Login\n5. Quit\n";
    cin >> initial;
    while(initial < 1 || initial > 5){
        cout << "\nEnter a valid number assigned to an option: ";
        cin >> initial;
    }
        if (initial == 1){ create_account();
    }
        else if (initial == 2){ login();
    }
        else if (initial == 3){ 
            cout << endl << "1. Take Loan\n2. Repay Loan\n";
            cin >> loan_initial;
                while (loan_initial != 1 && loan_initial != 2){
                    cout << endl << "Enter a valid input: ";
                    cin >> loan_initial;
                }
                if (loan_initial == 1){ take_loan();
                }
                else if (loan_initial == 2){ repay_loan();
                }}
        else if (initial == 4) { manager();
        }
        else if (initial == 5) { cout << "Thank You For Using This Bank"; return 0;
        }
}
}
int create_account(){
    string name, password, confirm_password;
    if (no_of_users == 10) { 
        cout << endl << "Maximum Accounts Created"; return 0;
    }
    cout << endl<< "Enter your name(-1 to cancel) ";
    cin >> name;
    if (name == "-1"){ 
        return 0;
    }
    cout << endl <<"Create a password(-1 to cancel): ";
    cin >> password;
    if (password == "-1"){
        return 0;
    }
    while (name == password){
        cout << endl << "Password cannot be the same as your name. Try Again(-1 to cancel): ";
        cin >> password;
        if (password == "-1"){
            return 0;
        }
    }
    cout << endl << "Confirm password: ";
    cin >> confirm_password;
    while (confirm_password != password){
        cout << endl << "Passwords do not match! Try Again(-1 to cancel): ";
        cin >> password;
        if (password == "-1"){
            return 0;
        }
        cout << endl << "Confirm password: ";
        cin >> confirm_password;
    }
    user[no_of_users].name = name;
    user[no_of_users].password = password;
    user[no_of_users].account_number = no_of_users+1;
    user[no_of_users].balance = 0;
    user[no_of_users].locked = false;
    no_of_users++;
    cout << "\nAccount created successfully! Your account number is: " << user[no_of_users-1].account_number;
    return 0;
}
int login(){
    int account_number, option;
    string password;
    cout << endl << "Enter your account number(-1 to cancel): ";
    cin >> account_number;
    if(account_number == -1) {
        return 0;
    }
    if(user[account_number-1].locked == true){
        cout << endl << "ACCOUNT LOCKED! CONTACT MANAGER";  return 0;
    }
    for (int i = 0; i < no_of_users; i++) {
        if (user[i].account_number == account_number) {
            cout << endl << "Account Holder: " << user[i].name;
            for (int j = 3; j > 0; j--){
                cout << endl << "Enter your password: ";
                cin >> password;
                if (password == user[i].password){
                    cout << endl << "Login Successful!";
                    while(true){ cout << endl << "Account Holder: " << user[i].name;
                    cout << endl << "Account Number: " << user[i].account_number;
                    cout << endl << "1. Check Balance\n2. Deposit\n3. Withdraw\n4. Transfer\n5. Change Password\n6. Logout\n";
                    cin >> option;
                    while (option <1 || option > 6){
                        cout << endl << "Enter a valid number assigned to an option: ";
                        cin >> option;
                    }
                    if (option == 1) { cout << endl << "Your balance is: $" << user[i].balance;
                    }
                    else if (option == 2){ deposit(i);
                    }
                    else if (option == 3){ withdraw(i);
                    }
                    else if (option == 4){ transfer(i);
                    }
                    else if (option == 5){ change_password(i);
                    }
                    else if (option == 6){ cout << endl << "Logged out successfully!"; return 0;
                    }}
                }
                else { cout << endl << "Incorrect password! " << j-1 << " chances left.";
                }
            } cout << endl << "Too Many Incorrect Attempts, ACCOUNT LOCKED!! Contact Bank Manager";
            user[i].locked = true;  return 0; 
        }}
         cout << endl << "Account not found!"; return 0;
}
int deposit(int a){
    int amount;
    cout << endl << "Account no. " << user[a].account_number;
    cout << endl << "Enter amount to be deposited(-1 to cancel): $";
    cin >> amount;
    if (amount == -1) {
        return 0;
    }
    else if (amount <= 0){
        cout << endl << "Amount can not be 0 or negative"; return 0;
    }
    else {user[a].balance = user[a].balance + amount;
    cout << endl << "$" << amount << " deposited to your bank account."; 
    return 0;
}
}
int withdraw(int b){
    int amount;
    string password;
    cout << endl << "Account no. " << user[b].account_number;
    cout << endl << "Enter amount to be withdrawn(-1 to cancel): $";
    cin >> amount;
    if (amount == -1){
        return 0;
    }
    else if (amount <= 0){
        cout << "Amount can not be 0 or negative"; return 0;
    }
    else {for (int i =3; i >0; i--) {
    cout << endl << "Enter Password: ";
    cin >> password;
        if (user[b].password == password) {
            if (user[b].balance < amount) {
                cout << endl << "Insufficient Balance"; return 0;
            } else { user[b].balance = user[b].balance - amount;
                cout << endl << "$" << amount << " Withdrawn Successfully."; return 0;
            }}
        else { cout << endl << "Incorrect Password. " << i-1 << "Chances left! "; }
            } cout << endl << "Too Many Incorrect Attempts, ACCOUNT LOCKED!! Contact Bank Manager";
            user[b].locked = true;  return 0;
        }
    }
int transfer(int c){
    int amount, reciever_account_number;
    string password;
    cout << endl << "Your Account No. " << user[c].account_number;
    cout << endl << "Reciever's Account No(-1 to cancel). ";
    cin >> reciever_account_number;
    if (reciever_account_number == -1){
        return 0;
    }
    for (int i = 0; i < no_of_users; i++){
        if (reciever_account_number == user[c].account_number) {
            cout << endl << "Can not transfer money to your own account"; return 0;
        }
        else if (reciever_account_number == user[i].account_number) {
            cout << endl << "Account Holder: " << user[i].name; 
            cout << endl << "Enter amount to be transfered: $";
            cin >> amount;
            if (amount <= 0){
                cout << endl << "Amount can not be 0 or negative"; return 0;
            }
            else {
            for (int j = 3; j >0; j--){
                cout << endl << "Enter Password: ";
                cin >> password;
                if (password == user[c].password){
                    if (amount > user[c].balance) {
                        cout << endl << "Insufficient Balance"; return 0;
                    }
                    else { user[i].balance = user[i].balance + amount;
                        user[c].balance = user[c].balance - amount;
                        cout << endl << "$" << amount << " transfered to " << user[i].name; return 0;
                    }}
                else { cout << "Incorrect Password. "<< j-1 << " chances left. ";
                }
                } cout << endl << "Too Many Incorrect Attempts, ACCOUNT LOCKED!! Contact Bank Manager"; }
            user[c].locked = true;  return 0;
            }}
            cout << endl << "No such account found. "; return 0;
    }
int change_password(int d){
    string current_password, new_password, confirm_password;
    cout << endl << "Enter Current Password(-1 to cancel): ";
    cin >> current_password;
    if(current_password == "-1"){
        return 0;
    }
    if (current_password == user[d].password) {
        cout << endl << "Create New Password: ";
        cin >> new_password;
        while (user[d].name == new_password) {
            cout << endl << "Password can not be your name. Create Other Password: ";
            cin >> new_password;
        }
        cout << endl << "Confirm Password: ";
        cin >> confirm_password;
        }
    else if (current_password != user[d].password){
        cout << endl << "Incorrect Password"; return 0;
    }
        while (new_password != confirm_password) {
            cout << endl << "Password did not match confirm password. Create Password";
            cin >> new_password;
            while (user[d].name == new_password) {
            cout << endl << "Password can not be your name. Create Other Password: ";
            cin >> new_password;
            } cout << endl << "Confirm Password: ";
            cin >> confirm_password;
        }
        user[d].password = new_password; 
        cout << endl << "Password Sucessfully Changed!!"; return 0;
    }
int take_loan(){
    string name;
    int amount;
    if (no_of_loans == 10) {
        cout << endl << "Maximum Loans Granted"; return 0;
    }
    cout << endl << "Enter your name(-1 to cancel): ";
    cin >> name;
    if (name == "-1") {
        return 0;
    }
    cout << endl << "Enter Amount(-1 to cancel): ";
    cin >> amount;
    if (amount == -1){
        return 0;
    }
    else if (amount <= 0){
        cout << endl << "Loan amount can not be 0 or negative!"; return 0;
    }
    else {loan_num[no_of_loans].name = name;
    loan_num[no_of_loans].amount = amount;
    loan_num[no_of_loans].id = no_of_loans+1;
    loan_num[no_of_loans].active = true;
    loan_num[no_of_loans].amount_to_be_paid_back = loan_num[no_of_loans].amount + (loan_num[no_of_loans].amount/10.00);
    cout << endl << "Loan granted of $" << loan_num[no_of_loans].amount << ". Your loan id is " << loan_num[no_of_loans].id;
    no_of_loans++;
    return 0;
}
}
int repay_loan(){
    int loan_id;
    float pay_back;
    cout << endl << "Enter loan id(-1 to cancel): ";
    cin >> loan_id;
    if (loan_id == -1) {
        return 0;
    }
    for (int i = 0; i < no_of_loans; i++){
        if (loan_num[i].id == loan_id) {
            cout << "\nLoan Holder: " << loan_num[i].name << endl << "Amount to be paid back: " << loan_num[i].amount_to_be_paid_back;
            cout << endl << "Pay(-1 to cancel): $";
            cin >> pay_back;
            if (pay_back == -1) {
                return 0;
            }
            while (pay_back > loan_num[i].amount_to_be_paid_back) {
                cout << endl << "Can not pay amount more than amount to be paid back. Pay: $";
                cin >> pay_back;
            }
            while (pay_back <= 0){
                cout << endl << "Can not take more loan on same id"; return 0;
            }
            loan_num[i].amount_to_be_paid_back = loan_num[i].amount_to_be_paid_back - pay_back;
            if (loan_num[i].amount_to_be_paid_back == 0){
                loan_num[i].active = false;
                cout << endl << "Loan Paid. "; return 0;
            } 
            else {
                cout << endl << "$" << pay_back << " Paid. $" << loan_num[i].amount_to_be_paid_back << " left. "; return 0;
            }
        }
    } cout << endl << "No Loan found"; return 0;
}
int manager(){
    int initial, account_number, lock_initial;
    string manager_password = "Manager@123", input_password;
    cout << endl << "Enter Password(-1 to cancel): ";
    cin >> input_password;
    if (input_password == "-1"){
        return 0;
    }
    if (manager_password == input_password) {
        while (true) {
            cout << endl << "1. User Database\n2. Loan Database\n3. Lock/Unlock Account\n4. Exit" <<endl;
        cin >> initial;    
        while (initial < 1 || initial > 4){
            cout << endl << "Invalid Input. Try Again: ";
            cin >> initial;
        }
        if (initial == 1){
            cout << endl << setw(20) << "Account Number" << setw(20) << "Account Holder" << setw(20) << "Balance" << setw(20) << "Lock Status";
            for (int i = 0; i < no_of_users; i++){
                cout << endl << setw(20) << user[i].account_number << setw(20) << user[i].name << setw(20) << user[i].balance << setw(20) << user[i].locked;
            }
        }
        else if (initial == 2){
            cout << endl << setw(20) << "Loan Id" << setw(20) << "Loan Holder" << setw(20) << "Loan Amount" << setw(20) << "Amount To Be Paid Back" << setw(20) << "Active";
            for (int j = 0; j < no_of_loans; j++) {
                cout << endl << setw(20) << loan_num[j].id << setw(20) << loan_num[j].name <<setw(20) << loan_num[j].amount << setw(20) << loan_num[j].amount_to_be_paid_back << setw(20) << loan_num[j].active;
            }
        }
        else if (initial == 3){
            cout << endl << "Enter Account Number: ";
            cin >> account_number;
            for (int i = 0; i<no_of_users; i++){
                if (user[i].account_number == account_number){
                    cout << endl << "Account is " << user[i].locked; 
                    if (user[i].locked == true){
                        cout << endl << "1. Unlock Account\n2. Exit" << endl;
                        cin >> lock_initial;
                        while(lock_initial > 2 || lock_initial < 1){
                            cout << endl << "Enter a valid input";
                            cin >> lock_initial;
                        }
                        switch (lock_initial){
                            case 1: user[i].locked = false; 
                                 cout << endl << "Account Unlocked"; return 0;
                            case 2: return 0;
                        }
                    }
                    else {
                        cout << endl << "1. Lock Account\n2. Exit" <<endl;
                        cin >> lock_initial;
                        while(lock_initial > 2 || lock_initial < 1){
                            cout << endl << "Enter a valid input";
                            cin >> lock_initial;
                        }
                        switch (lock_initial){
                            case 1: user[i].locked = true; 
                                 cout << endl << "Account Locked"; return 0;
                            case 2: return 0;
                        }
                    }
                }
            }
        }
        else if (initial == 4){ 
            return 0;
        }
    }}
    else { return 0;
    }
}