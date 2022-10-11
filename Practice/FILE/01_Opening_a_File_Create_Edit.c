#include<stdio.h>
int main(){
    FILE *fptr;
    fptr=fopen("file.txt","r");
    if(fptr==NULL){
        printf("\nError-can not open the disignated File.");
    }
    else{
        printf("File is opened.");
        fclose(fptr);
    }
    return 0;
}