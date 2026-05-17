#include<iostream>
using namespace std;
int main() {
    float x;
    cout << "Enter a number: ";
    cin >> x;
if(x>0){
    cout << "\nSgn("<<x<<")=1";
}
else if(x<0){
    cout<< "\nSgn("<<x<<")=-1";
} else{
    cout<<"\nSgn("<<x<<")=0";
}
return 0;
}


