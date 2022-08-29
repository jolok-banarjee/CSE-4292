#include <stdio.h>
int main()
{
    int n, times[10], i = 1;
    printf("Enter a Number for Multiplication Table : ");
    scanf("%d", &n);
    for (times[i] = 1; times[i] <= 10; times[i] = times[i] + 1)
    {
        printf("%d X %d = %d\n", n, times[i], n * times[i]);
    }
    return 0;
}
