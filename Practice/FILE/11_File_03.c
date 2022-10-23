#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fptr1, *fptr2;
    char c;
    int count_lines = 0;
    fptr1 = fopen("file.txt", "r");
    if (fptr1 == NULL)
    {
        printf("Cannot open file %s \n", "file.txt");
        exit(0);
    }
    fptr2 = fopen("file1.txt", "w");
    // Read contents from file
    while ((c = fgetc(fptr1)) != EOF)
    {
        fputc(c, fptr2);
        if (c == '\n') {
            count_lines = count_lines + 1;
        }
    }
    printf("\nContents Copied to %s", "file1.txt");
    printf("\nThere are %d lines in a %s\n", count_lines,"file.txt");
    printf("\nProgram Successfully Terminated.");
    fclose(fptr1);
    fclose(fptr2);
    return 0;
}