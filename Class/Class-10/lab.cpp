#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fptr;
    char c;
    int word,character;
    word=character=0;
    fptr=fopen("file.txt","r");
    if(fptr==NULL)
    {
        printf("Error! File can not open.");
        exit(1);
    }
    while(c!=EOF)
    {
        //read file.txt
        //single character
        if(c==" "||c=="\n")
        {
            word++;
        }
        else
            character++;

        c=fgetc(fptr);


    }
    printf("\nThe number of words in the file.txt are: %d\n",word);
    printf("The number of character in the file.txt are: %d",character);
    fclose(fptr);
    return 0;

}

