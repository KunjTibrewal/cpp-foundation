#include<iostream>
using namespace std;

double pi = 3.14;

//CYLINDER
float volume(float r, float h){
    return (pi*r*r*h);
}
//CUBOID
float volume(float l, float b, float h){
    return (l*b*h);
}
//CUBE
float volume(float a){
    return (a*a*a);
}
//THOUGH IT WONT WORK IF ARGUMENT TYPES AND ARGUMENT NUMBERS IS ALSO SAME
//
int main(){
    int radius, height_cylinder, side, length, breadth, height;
    cout << "Enter l, b, h: ";
    cin >> length >> breadth >> height;
    cout << endl << "Enter r, h: ";
    cin >> radius >> height_cylinder;
    cout << endl << "Enter a: ";
    cin >> side;
    cout << endl << "Volume of cuboid: " << volume(length, breadth, height);
    cout << endl << "Volume of cylinder: " << volume(radius, height_cylinder);
    cout << endl << "Volume of cube: " << volume(side);
}