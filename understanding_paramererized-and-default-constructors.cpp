#include <iostream>
#include <cmath>
using namespace std;

class point
{
    int x, y;

public:
    point(int a, int b)
    { // parameterized constructor - accepts parameters
        x = a;
        y = b;
    }
    point(void)
    { // default constructor - does not accept parameters
        cout << "x: ";
        cin >> x;
        cout << "y: ";
        cin >> y;
    }
    friend void distance(const point&, const point&);
};

void distance(const point& p1, const point& p2)
{
    cout << "Distance: " << sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2)) << endl;
}
int main()
{
    int x1, y1, x2, y2;
    cout << "Enter the x coordinate of the first point: ";
    cin >> x1;
    cout << "Enter the y coordinate of the first point: ";
    cin >> y1;
    point p1(x1, y1); // parameterized constructor will be called
                      // we can also write point p1 = point(x1, y1);
    point p2;         // default constructor will be called
    distance(p1, p2);
    return 0;
}