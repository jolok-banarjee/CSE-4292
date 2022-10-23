#include <iostream>
using namespace std;
class student{
public:
    int roll;
    char name[50];
    void print(){
        cout<<"The roll number is: "<<roll<<endl;
        cout<<"Enter name: ";
        cin.get(name,50);
        cout<<"Name: "<<name<<"\n"<<"Thank you";
    }
};
int main(){
    student std;
    std.roll=21014026;
    std.print();
    cout<<"\n"<<"Program successfully Terminated.";
    return 0;
}