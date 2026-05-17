#include<iostream>
using namespace std;
int main(){
    float a;
    int b;
    cout << "Enter a number 'a': "; /*this program aint working for negative numbers
    as of now... will try to fix it after if else statements are covered*/
    cin >> a;
    if(a<0){ //17-05-2026 fixed negative number GIF problem
        b = int(a) - 1; //greatest integer function
    } else{
        b = int(a);
    }
    float c = a - b ; //fractional part of a
    if(c==1) { b = b + 1, c = 0; }
    else{}
        // switch(c){
    //    case 1:      Tried using switch but it only works for integers and not for floats
     //   b = b + 1;
     //   break;
     
    cout << "The greatest integer function of a is: " << b << endl;
    cout << "The fractional part of a is: " << c << endl;
    return 0;
}
