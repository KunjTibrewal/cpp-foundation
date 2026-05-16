#include<iostream>
using namespace std;
int main(){
    float a;
    cout << "Enter a positive number 'a': "; /*this program aint working for negative numbers
    as of now... will try to fix it after if else statements are covered*/
    cin >> a;
    int b = int(a); //greatest integer function
    float c = a - int(a) ; //fractional part of a
    cout << "The greatest integer function of a is: " << b << endl;
    cout << "The fractional part of a is: " << c << endl;
    return 0;
}
