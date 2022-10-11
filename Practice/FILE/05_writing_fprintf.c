#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num;
    FILE *fptr;
    fptr=fopen("fprintf.txt","w");
    if(fptr==NULL){
        printf("ERROR");
        exit(1);
    }
    printf("Enter num: ");
    scanf("%d",&num);

    fprintf(fptr,"%d",num);
    fclose(fptr);
    return 0;
}