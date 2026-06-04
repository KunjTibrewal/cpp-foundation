#include<iostream> 
using namespace std;

class school{
    private: 
    static int count; // default value is 0
    int id;
    public: 
    void setData(){
        cout<<"Enter id: ";
        cin>>id;
        count++;
    }
    void displayData(){
        cout<<"Id: "<<id<<endl;
    }
    static void displayCount(){    // static method can only access static data members
        cout<<"Count: "<<count<<endl;
    }
};

int school::count;    // it is same for all objects and is a class variable

int main(){
    school s1, s2, s3;
    s1.setData();
    school::displayCount();
    s2.setData();
    school::displayCount();
    s3.setData();
    school::displayCount();
    s1.displayData();
    s2.displayData();
    s3.displayData();
    return 0;
}
