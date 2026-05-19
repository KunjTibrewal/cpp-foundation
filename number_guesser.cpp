#include<iostream>
using namespace std;

int main(){
    int number, guess, chances , count = 1;
    int initial;
    
    //Game Initiator

    cout << "Welcome to number guesser game!" << endl
    << "1. To Start" << endl
    << "2. To exit: " ;
    cin >> initial;
    if (initial != 1 && initial != 2){
        cout << endl << "Please enter a valid input: ";
        cin >> initial; }
    switch (initial){
        case 1: break;
        case 2: cout <<endl<<"Thank You For Using This Program";
        return 0; break;}
    
    //Game Settings

    int settings;
    cout<< endl << "Would you like to play" <<endl
    << "1. Limited Chances" <<endl
    << "2. Unlimited Chances" <<endl
    << "3. Exit: ";
    cin >> settings;
    if (settings != 3 && settings != 2 && settings != 1){
        cout << endl<<"Please enter a valid input: ";
        cin >> settings;
    }
    switch (settings){
        case 1: cout <<endl<<"Please enter how many chances you want: ";
                cin >>chances; break;
        case 3: cout <<endl<<"Thank you for using this program";
                return 0; break;
        case 2: chances = 1; break;
    }

    //Game

    for (count = 1; count <= chances; count++){
        cout<<endl <<"Take a guess between 1 to 100: ";
        cin>> guess;
        if (guess <= 0 || guess > 100){
            cout<<endl<<  "Take a valid guess: ";
            cin >> guess; 
            chances++;}
        else if (guess == number){
            cout <<endl <<"Bravo!! You Guessed it right in " << count <<" tries."<<endl
            <<"Thanks for playing!";
            return 0;}
        else if (guess < number){
            cout << endl <<"Too low!";
            switch (settings) {
            case 2: chances++; break;}}
        else if (guess > number){
            cout << endl <<"Too high!";
            switch (settings) {
            case 2: chances++; break;}}
        }
    cout << endl << "Out of chances! YOU LOST";
    return 0;
        }
    