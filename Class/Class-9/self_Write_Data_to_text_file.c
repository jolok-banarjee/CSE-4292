/*Writing Data to the text file in a program*/
#include<stdio.h>
#include<stdlib.h>
int main(){
    int val;
    FILE *fptr;
    fptr=fopen("file.txt","w");
    if(fptr==NULL){
        printf("File type Invalid!");
        exit(1);
    }
    printf("Please enter the vale: ");
    scanf("%d",&val);
    fclose(fptr);
    return 0;
}
