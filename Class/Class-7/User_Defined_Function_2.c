#include <stdio.h>

int multiplication(int m, int n);
float division (int m, int n);

int main(){
    int a, b, multiply, div;
    multiply =multiplication(a,b);
    div = division(a,b);
    printf("Multiplication of two number %d * %d = %d", a, b, multiply);
    printf("Division of two number %d / %d = %.2f", a, b, div);
    return 0;
}

int multiplication(int m, int n){
    int multiplication;
    printf("Enter Two Integer Number : ");
    scanf("%d %d", &m, &n);
    multiplication = m*n;
    return multiplication;
}

float division (int m, int n){
    int division;
    printf("\nEnter Any Two Number : ");
    scanf("%d %d", &m, &n);
    division = m/n;
    return division;
}
