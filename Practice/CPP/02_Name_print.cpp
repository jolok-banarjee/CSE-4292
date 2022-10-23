#include<iostream>
using namespace std;

class namePrint
{
public:
    string name; //it's important to print a string through declear variable.
};
int main()
{
    namePrint name;
    name.name="Jolok";
    cout<<"Nmae: "<<name.name<<endl;
    cout<<"Program successfully terminated.";
    return 0;
}