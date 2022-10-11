#include <stdio.h>
int main()
{
    FILE *fptr;
    char c;
    int count=0;
    //open a file
    fptr=fopen("fputs.txt","r");
    if(fptr==NULL){
        printf("\nError-cannot open designated file.");
    }
    else{
        printf("\nOpened file.\n");
        while(1){
            c=fgetc(fptr);
            if(feof(fptr)){
                break;
            }
            //print data on console
            printf("%c",c);
            //count character in this file
            if(c!=' '){
                count++;
            }
        }
        printf("\nCount: %d",count);
        fclose(fptr);
    }
    return 0;
}