#include <iostream>
using namespace std;

class Point
{
    int x, y;

public:
    Point(int a, int b)
    {
        x = a;
        y = b;
    }
    void displayPoint()
    {
        cout << "The point is (" << x << " ," << y <<")"<< endl;
    }
};
// Create a function (Hint: Make it a friend funtion)which takes 2 point 
// object and compute the distance between those 2 points
int main()
{
    Point p(1, 1);
    p.displayPoint();

    Point q(4, 6);
    q.displayPoint();

    return 0;
}