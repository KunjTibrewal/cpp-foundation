#include<iostream>
using namespace std;
//using functions
int hcf(int, int);
int lcm(int, int);
int main(){
    int num1, num2, choice;
    enum operation {HCF, LCM};
    operation performed;
    cout << "Enter the two numbers: ";
    cin >> num1 >> num2;
    cout << "\nEnter operation to be performed(1. HCF/2. LCM): ";
    cin >> choice;
    switch(choice){
        case 1: performed = HCF; break;
        case 2: performed = LCM; break;
        default: cout << "\nInvalid Input!"; return 0;
    }
    switch (performed){
        case HCF: cout << "\nHCF Of " << num1 << " and " <<num2 << " is: " << hcf(num1, num2); break;
        case LCM: cout << "\nLCM of " << num1 << " and " << num2 << " is: " << lcm(num1, num2); break;
    }
    return 0;
}
int hcf(int a, int b){
    int hcf = 1;
    for (int i = 1; i <=a && i  <=b; i++){
        if (a%i==0 && b%i == 0 && i >= hcf) {
            hcf = i;
        }
        else {continue; }
    }
    return hcf;
}
int lcm(int a, int b){
    int lcm = (a/hcf(a, b))*b;
    return lcm;
}