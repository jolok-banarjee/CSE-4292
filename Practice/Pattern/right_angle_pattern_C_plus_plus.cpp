#include <iostream>
using namespace std;

int main()
{
    int n, row, col;
    cout<<"Enter number = ";
    cin>>n;
    for(row=1;row<=n;row++)
    {
        for(col=1;col<=row;col++)
        {
            cout<<col;
        }
        cout<<"\n";
    }
    return 0;
}