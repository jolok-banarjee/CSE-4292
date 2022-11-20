#include <stdio.h>
int main()
{
    int m = 0;
    do
    {
        /* code */
        if (m > 10)
            continue;
        m = m + 10;
    }
    while (m < 50);
        {
            printf("Infinite %d", m);

        }

    printf("%d", m);
    return 0;
}