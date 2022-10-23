#include<stdio.h>
#include<stdlib.h>
#define DATA_SIZE 500
int main(){
    char name[DATA_SIZE];
    int i=0, num, marks;
    FILE *fptr, *fptr1;
    fptr=fopen("studentData.txt","w"); //write data in studentData.txt file
    if(fptr==NULL){
        printf("Error!.");
        exit(1);
    }
    printf("\nEnter Number of Student information to store in the file: \n");
    scanf("%d",&num);
    for(i;i<num;i++){
            printf("\nStudent %d\nName: ", i+1); //student number indexing
            scanf("%s",name); //input student name
            printf("Enter Marks: ");
            scanf("%d",&marks); //input student marks

            fprintf(fptr,"\nName: %s\nMarks=%d \n",name,marks); //store studentData in txt file
    }
    fclose(fptr);
    return 0;
}
