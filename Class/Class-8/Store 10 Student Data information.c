#include<stdio.h>
#include<string.h>
struct studentInformation {
    char fName[20];
    int id;
    int age;
    int cgpa;
}stud[2];

int main(){
    int i;
    printf("2 Student Information.\n");
    for(i=0;i<2;++i){
        printf("Enter Student[%d] ID Number: ",i+1);
        getchar();
        scanf("%d",&stud[i].id);
        getchar();
        printf("Enter Student[%d] First Name: ",i+1);
        scanf("%s", stud[i].fName);
        scanf("%[^\n]", &stud[i].fName);
        printf("Enter Student[%d] age: ",i+1);
        scanf("%d",&stud[i].age);
        printf("\nEnter Student[%d] CGPA: ",i+1);
        scanf("%.2f",&stud[i].cgpa);
    }
    printf("Display provided student information.\n");
    for(i=0;i<2;++i){
        if(stud[i].cgpa>3.5){
        printf("Student ID: %d \n",stud[i].id);
        //puts(stud[i].fName);
        printf("Student Age: %d \n",stud[i].age);
        printf("Student Age: %.2f \n",stud[i].cgpa);
    }
    }
    return 0;
}
