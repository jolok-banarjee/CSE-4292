
#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fptr;
    char c;
    int word,character;
    word=character=0;
    fptr=fopen("file.txt","r");
    if(fptr==NULL){
        printf("Error! File can not open.");
        exit(1);
    }
    while(!feof(fptr)){
        //read file.txt
        //single character
        c=fgetc(fptr);
        printf("%c",c);

    }
    fclose(fptr);
    return 0;
