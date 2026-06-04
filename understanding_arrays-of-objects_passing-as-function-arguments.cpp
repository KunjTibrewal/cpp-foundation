#include<iostream>
using namespace std;

class complexnumber{
    int a, b;
    public: 
    void setdata(){
        cout << "Enter the real and imaginary parts of the complex number: ";
        cin >> a >> b;
    }
    void showdata(){
        cout<<"The sum of complex number is "<<a<<" + "<<b<<"i"<<endl;
    }
    void sumcomplex(complexnumber c1, complexnumber c2){ // we can also pass the objects as an argument to the function
        a = c1.a + c2.a;
        b = c1.b + c2.b;
    }
};

int main(){
    complexnumber nums[2], sum;  // we can also create an array of objects
    for(int i = 0; i < 2; i++){
        nums[i].setdata();
    }
    sum.sumcomplex(nums[0], nums[1]);
    sum.showdata();
    return 0;

}