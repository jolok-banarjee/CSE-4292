/* Write a program in C to print right triangle number pattern of n rows using for loop
Output:
1
1 2
1 2 3
1 2 3 4
*/
#include <stdio.h>
int main()
{
    int n, row, col;
    printf("Enter Numbe = ");
    scanf("%d", &n);

    for(row=1;row<=n;row++){
        for(col=1;col<=row;col++){
            printf("%d ", col);
        }
        printf("\n");
    }
    return 0;
}