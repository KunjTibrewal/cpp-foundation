#include<iostream>
#include<iomanip>
using namespace std;
int main() {
    float apple_price = 0.99f,banana_price = 0.59f, orange_price = 0.79f;
    int apple_qty, banana_qty, orange_qty;
    cout << "Enter quantity of apples: ";
    cin >> apple_qty;  
    cout << "\nEnter quantity of bananas: ";
    cin >> banana_qty;
    cout << "\nEnter quantity of oranges: ";
    cin >> orange_qty;  
    cout << "\nReceipt:\n";
    cout << "Cost of apples:  $" <<setw(7) << apple_price * apple_qty << endl;
    cout << "Cost of bananas: $" <<setw(7) << banana_price * banana_qty << endl;
    cout << "Cost of oranges: $" <<setw(7) << orange_price * orange_qty << endl;
    float total_cost = apple_price * apple_qty + banana_price * banana_qty + orange_price * orange_qty;
    cout << "Total cost:      $" <<setw(7) << total_cost << endl;
    return 0;
}
