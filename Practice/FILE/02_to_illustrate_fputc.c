#include <stdio.h>
int main()
{
    FILE *fp;
    int ch, count = 0;
    char c;
    fp = fopen("file.txt", "w+");
    for (ch = 33; ch <= 126; ch++)
    {
        fputc(ch, fp);
        fprintf(fp, " ");
    }
    fclose(fp);
    fp = fopen("file.txt", "r");
    while (1)
    {
        c = fgetc(fp);
        if (feof(fp))
        {
            break;
        }
        printf("%c", c);
        if (c != ' ')
            count++;
    }
    printf("\n%d", count);
    fclose(fp);
    return (0);
}