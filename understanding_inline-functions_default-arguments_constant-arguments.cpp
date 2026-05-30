#include<iostream>
using namespace std;

//INLINE FUNCTION AND STATIC VARIABLE
inline int product(int x, int y){  //Inline functions are used when you want to have a short function seperately for easier managemnet
    return x*y;                    //but it is repeated many times in the code so compilier writes the function in the code to save time
}                                  // using inline function doesnt gurantee function to be inline, it is like a request to the compiler
int sum(int x, int y){             // not all functionsa are recommended to keep inline because it saves time but also uses more memory
    return x+y;
}
int use_of_static_variable(int x){ 
    static int count = 0;       //it is read only once
    count = count +1;           //this value is retained
    return x+count;             //static variables are not recommended to be used in inline function as then same static variable will be written multiple times in the code
}

//DEFAULT ARGUMENTS
float amount(float principal_amount, float intrest = 1.1){ //If while calling this function no actual parameter for intrest is given 1.1 will be taken by default
    return (principal_amount*intrest);
}

int main(){
    //INLINE FUNCTION AND STATIC VARIABLE
    int a, b;
    cout << endl << "Enter two numbers: ";
    cin >> a >> b;
    cout << endl << "Product is " << product(a, b); // compilier writes the function code here itself
    cout << endl << "Product is " << product(a, b);
    cout << endl << "Product is " << product(a, b);
    cout << endl << "Product is " << product(a, b);
    cout << endl << "Product is " << product(a, b);
    cout << endl << "Product is " << product(a, b);
    cout << endl << "Product is " << product(a, b);
    cout << endl << endl << "Sum is " << sum(a, b);
    cout << endl << endl << "5 nums after a is: " << use_of_static_variable(a) << use_of_static_variable(a) << use_of_static_variable(a) << use_of_static_variable(a) << use_of_static_variable(a);

    //DEFAULT ARGUMENTS
    int loan_amt;
    cout << endl << endl << endl << "Enter loan amount: $";
    cin >> loan_amt;
    if(loan_amt < 1000){
        cout << endl << "Payback amount: $" << amount(loan_amt); // intrest will be 1.1
    }
    else{
        cout << endl << "Payback amount: $" << amount(loan_amt, 1.12); // intrest will be 1.12
    }
    
    //CONSTANT ARGUMENTS
    int strlen(const char *p); // p CANNOT BE MODIFIED
    return 0;
}