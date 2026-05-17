#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter a number: ";
    cin>>a;
    if(a>0){
        cout<<"\nThe number is positive.";
    }
    else if(a<0){
        cout<<"\nThe number is negative.";
    }
    else{
        cout<<"\nThe number is zero.";

    }

    switch(a){
        case 1:
            cout <<"\nThe number is unity.";
            break;
        default:
            cout<<"\nThe number is not unity.";
            break;
    }
    cout<<"\nThank you for using the program.";
    
}