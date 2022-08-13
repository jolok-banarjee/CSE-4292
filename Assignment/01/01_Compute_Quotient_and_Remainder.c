/* 1. C Program to Compute Quotient and Remainder */
//Author: Jolok Banarjee, Id:21014026, AE-02, Aerospace, BSMRAAU
#include <stdio.h>
int main() {
    int dividend, divisor, quotient, remainder;
    printf("Enter dividend: ");
    scanf("%d", &dividend);
    printf("Enter divisor: ");
    scanf("%d", &divisor); 
    // Computes quotient
    quotient = dividend / divisor;
    // Computes remainder
    remainder = dividend % divisor;
    printf("Quotient = %d\n", quotient);
    printf("Remainder = %d", remainder);
    return 0;
}
