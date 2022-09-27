#include<iostream>
using namespace std;

struct date{
    int d, m, y;
};
const int monthDays[12]={31,28,31,30,31,30,
                        31,31,30,31,30,31};
int countLeapYears(date d){
    int years=d.y;
    if(d.m<=2)
        years--;
    return years/4 -years/100 + years/400;
}
int getDifference(date dt1, date dt2){
    long int n1 = dt1.y*365+dt1.d;
    for (int i=0; i<dt1.m-1;i++)
        n1+=monthDays[i];
    n1+=countLeapYears(dt1);
    long int n2=dt2.y*365+dt2.d;
    for(int i=0;i<dt2.m-1;i++)
        n2+=monthDays[i];
    n2+=countLeapYears(dt2);
    return (n2-n1);
}
int main(){
    date dt1={1,2,2000};
    date dt2={1,2,2004};

    cout<< "Difference between two dates is "
            << getDifference(dt1,dt2);
    return 0;
}