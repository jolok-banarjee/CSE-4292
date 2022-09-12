#include <stdio.h>
#include <string.h>
int main()
{
    char str[100], ch;
    int i, n, count = 0;
    printf("Enter a string :");
    gets(str);
    printf("Enter a character to search :");
    scanf("%c", &ch);
    n = strlen(str);
    for (i = 0; i < n; i++)
    {
        if (ch == str[i])
        {

            count++;
        }
    }
    printf("No. of %c present is %d", ch, count);
    return 0;
}