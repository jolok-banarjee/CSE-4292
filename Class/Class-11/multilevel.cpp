#include <bits/stdc++.h>
using namespace std;
const float pi=22/7.0;
class circle
{
public:
    float radius;
    void area()
    {
        cout<<"Enter the radius for circle: ";
        cin>>radius;
        cout<<"Area of Circle is: "<<(pi)*radius*radius<<endl;
    }
};
class sphere: public circle
{
public:
    void volume()
    {
        cout<<"\nEnter the radius for sphere: ";
        cin>>radius;
        cout<<"Volume of shpere is: "<<4*(pi)*radius*radius<<endl;
    }
};

class polygon: public sphere
{

};
int main()
{
    polygon ob1;
    ob1.area();
    ob1.volume();
}

