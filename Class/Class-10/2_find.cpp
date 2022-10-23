#include<iostream>
using namespace std;

class shape
{
private:
    double length;
    double breadth;
    double height;
public:
    double area()
    {
        return length*breadth;
    }
    double volume()
    {
        return length*breadth*height;
    }
    void getdata(double l, double b, double h);
    //{
       //length = l;
        //breadth = b;
        //height = h;
    //}
};
void shape::getdata(double l, double b, double h)
{
        length = l;
        breadth = b;
        height = h;
    }

main()
{
    shape r;
    double a,b,c;
    //r.length=4.67;
    //r.breadth=7.5;
    //r.height=4;
    cin>>a>>b>>c;
    //r.getdata(4.67, 7.5, 4);
    r.getdata(a,b,c);
    cout<<"Area: "<<r.area()<<" sqmeter"<<endl;
    cout<<"Volume: "<<r.volume()<<" cubic meter"<<endl;

    return 0;
}
// :: --> scope resolution operator
