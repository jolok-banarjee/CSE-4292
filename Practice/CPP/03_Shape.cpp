#include <iostream>
using namespace std;
class shape
{
private:
    double length, breadth, height;

public:
    void getData(double l, double b, double h)
    {
        length=l;
        breadth=b;
        height=h;
    }
    double area()
    {
        return length * breadth;
    }
    double volume()
    {
        return length * breadth * height;
    }
};

int main()
{
    shape u;
    double a, b, c;
    cout<<"Enter the value of a, b, c: ";
    cin >> a >> b >> c;
    u.getData(a, b, c);
    cout << "Area: " << u.area() << " sqmeter" << endl;
    cout << "Volume: " << u.volume() << " cubic meter" << endl;
    return 0;
}