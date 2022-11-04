#include<stdio.h>
#include<stdlib.h>
#define DATA_SIZE 1000
int main()
{
    char data[DATA_SIZE];
    FILE *fptr;
    fptr = fopen("file.txt","w");
    printf("Enter contents to store in file: \n");
    gets(data);
    fprintf(fptr,"%s",data);
    fprintf(stdout,"%s",data);
    fclose(fptr);
    return 0;
}
