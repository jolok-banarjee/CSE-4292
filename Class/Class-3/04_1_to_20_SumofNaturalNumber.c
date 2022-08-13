/* Author: Jolok Banarjee, ID:21014026, AE-02, Aerospace, BSMRAAU */
#include <stdio.h>
int main() {
    int number, i, sum = 0;

    printf("Enter a positive integer number : ");
    scanf("%d", &number);

    for (i = 1; i <= number; ++i) {
        sum += i;
    }

    printf("Sum = %d", sum);
    return 0;
}