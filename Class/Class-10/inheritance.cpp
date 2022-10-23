//inheritance - parents quality --> child
//parents attribute int a, b;
//parents --? baseclass
//bro1, bro2, bro3

//bro1 attibute int c;
//bro2 attibute int d;
//bro3 attibute int e;
//protector, public can be inheritance private can't
#include<iostream>
using namespace std;

class sample
{
protected:
    int age;  //base-class --> parents class
              //protected access specifier
};

class sampleChild:public sample
{
public:
    void displayAge(int a){
        age=a;
        cout<<"The age is: "<<age;
    }
};

int main()
{
    sampleChild r;
    r.displayAge(34);

    return 0;
}
