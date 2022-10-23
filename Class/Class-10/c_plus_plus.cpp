#include<iostream>
using namespace std;

class student
{
public:
    int roll;
    char name[50];
    //string name; //to assign name and print on console in main function
    void print()
    {
        cout<<"The roll number is: "<<roll<<endl;
        cout<<"Enter the name of the student: ";
        cin.get(name,50);
        cout<<"The name of the student is: "<<name<<endl;
    }
    //by default private  protected-inheritance
    //private:
    //protected:
    //public:
};

main()
{
    student st1;
    st1.roll=102;
    //st1.name="Alex";

    st1.print();
    //cout<< roll<<name<<endl;
    cout<<"This one is outside of class member function.Student name: "<<st1.name<<endl;
    return 0;
}
