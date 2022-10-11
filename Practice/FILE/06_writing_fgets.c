#include <stdio.h>
int main()
{
    int i=0;
    FILE *fptr;
    fptr=fopen("fgets.txt","w");
    //return if could not open file
    if(fptr==NULL){
        printf("ERROR");
        return 0;
    }
    char string[]="Good Bye",recevied_string[20];
    for(i=0;string[i]!='\0';i++){
        //input string into the file
        //single character at a time
        fputc(string[i],fptr);
    }
    fclose(fptr);
    fptr=fopen("fgets.txt","r");
    //reading the string from file
    fgets(recevied_string,20,fptr);
    printf("%s",recevied_string);
    fclose(fptr);
    return 0;
}