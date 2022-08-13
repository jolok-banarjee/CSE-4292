/* Write a C program to input the basic salary of an employee and calculate its Gross salary according to the following:
Basic Salary <= 23000 BDT: HRA = 55%, Medical = 8%
Basic Salary <= 35000 BDT: HRA = 40%, Medical = 8%
Basic Salary > 35000 BDT : HRA = 35%, Medical = 8%
Author: Jolok Banarjee, Id: 21014026, AE-02, Aerospace, BSMRAAU */
#include<stdio.h>
int main(){
    float basicSalary,HRA,Medical, Total;
    printf("Enter Your Basic Salary: ");
    scanf("%f",&basicSalary);
    if (basicSalary<=23000){
        HRA = basicSalary * 0.55;
        Medical = basicSalary * 0.08;
    }
    else if (basicSalary>23000 && basicSalary<=35000){
        HRA = basicSalary * 0.4;
        Medical = basicSalary * 0.08;
    }
    else{
        HRA = basicSalary * 0.35;
        Medical = basicSalary * 0.08;
    }
    Total= basicSalary + HRA + Medical;
    printf("The Gross salary is %0.2f",Total);
    return 0;
}