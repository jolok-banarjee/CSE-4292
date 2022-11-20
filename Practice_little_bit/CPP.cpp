#include<iostream>
using namespace std;

int main()
{
    int i=10, j=5;
    int modResult=0;
    int divResult=0;
    modResult = i%j;
    cout<<modResult<<" "<<"done mod"<<endl;
    divResult=i/modResult;
    cout<<divResult<<"finished";
    return 0;
}
