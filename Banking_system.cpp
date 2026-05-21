#include<iostream>
#include<string>
using namespace std;

struct bank{
    string name, password;
    int account_number;
    float balance;
};
int no_of_users = 0;
bank user[10];

int create_account();
int login();
int deposit();
int withdraw();
int transfer();
int change_password();


int main(){ 
    int initial;
    while (true){
    cout << "\nWelcome To The C++ Bank";
    cout << "\n1. Create Account\n2. Login\n3. Manager Login\n4. Quit\n";
    cin >> initial;
    while(initial < 1 || initial > 4){
        cout << "\nEnter a valid number assigned to an option: ";
        cin >> initial;
    }
        if (initial == 1){ create_account();
        cout << "\nAccount created successfully! Your account number is: " << user[no_of_users-1].account_number;
    }
        else if (initial == 2){ login();
        }
}
}
int create_account(){
    string confirm_password;
    cout << endl<< "Enter your name: ";
    cin >> user[no_of_users].name;
    cout << endl <<"Create a password: ";
    cin >> user[no_of_users].password;
    while (user[no_of_users].password == user[no_of_users].name){
        cout << endl << "Password cannot be the same as your name. Try Again: ";
        cin >> user[no_of_users].password;
    }
    cout << endl << "Confirm password: ";
    cin >> confirm_password;
    while (confirm_password != user[no_of_users].password){
        cout << endl << "Passwords do not match! Try Again: ";
        cin >> user[no_of_users].password;
        cout << endl << "Confirm password: ";
        cin >> confirm_password;
    }
    user[no_of_users].account_number = no_of_users+1;
    user[no_of_users].balance = 0;
    no_of_users++;
    return 0;
}
int login(){
    int account_number, option;
    string password;
    cout << endl << "Enter your account number: ";
    cin >> account_number;
    for (int i = 0; i < no_of_users; i++) {
        if (user[i].account_number == account_number) {
            cout << endl << "Account Holder: " << user[i].name;
            for (int j = 3; j > 0; j--){
                cout << endl << "Enter your password: ";
                cin >> password;
                if (password == user[i].password){
                    cout << endl << "Login Successful!";
                    cout << endl << "Account Holder: " << user[i].name;
                    cout << endl << "Account Number: " << user[i].account_number;
                    cout << endl << "1. Check Balance\n2. Deposit\n3. Withdraw\n4. Transfer\n5. Change Password\n6. Logout\n";
                    cin >> option;
                    while (option <1 || option > 6){
                        cout << endl << "Enter a valid number assigned to an option: ";
                        cin >> option;
                    }
                    if (option == 1) { cout << endl << "Your balance is: $" << user[i].balance;
                    }
                    else if (option == 2){ deposit();
                    }
                    else if (option == 3){ withdraw();
                    }
                    else if (option == 4){ transfer();
                    }
                    else if (option == 5){ change_password();
                    }
                    else if (option == 6){ cout << endl << "Logged out successfully!"; return 0;
                    }
                }
                else { cout << endl << "Incorrect password! " << j-1 << " chances left.";
                }
            } return 0; 
        }
        else {  cout << endl << "Account not found!"; return 0;
        }
    }
}
int deposit(){
}
int withdraw(){
}
int transfer(){
}
int change_password(){
}