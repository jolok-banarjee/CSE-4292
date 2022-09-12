#include<stdio.h>

//int summation(int m, int n);
int add(int m, int n);
int minus(int m, int n);
void calculate (int m, int n);
int main(){
    int a =3,b=2 , sum, substract;
    //sum = summation(a,b);
 /*   sum = add(a,b);
    substract = minus(a,b);
    printf("The summation of %d + %d = %d",a,b, sum);
    printf("\nThe difference of %d - %d = %d", a , b , substract);
    */
    calculate(a,b);
    return 0;
}
/*
int summation(int m, int n){
    printf("Enter two integer number : ");
    scanf("%d %d", &m, &n);
    return m+n;
}
*/
/*
int add(int m, int n){
    int summation;
    summation= m+n;
    return summation;
}
*/
/*
int substraction(int num1, int num2){
    printf("Enter two integer number : ");
    scanf("%d %d", &num1, &num2);
    return num1-num2;
}
*/
/*
int minus(int m, int n){
    int difference;
    difference= m-n;
    return difference;
}
*/
void calculate (int m, int n){
    int summation, difference;
    summation = m+n;
    difference = m-n;
    printf("The summation of %d + %d = %d",m,n, summation);
    printf("\nThe difference of %d - %d = %d", m , n , difference);
}
