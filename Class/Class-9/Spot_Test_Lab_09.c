#include <stdio.h>
#include <string.h>

struct stInfo {
    char name[20];
    char address[50];
    float cgpa;
};
int main(){
    char country[20];
    float cgpa;
    int i;
    struct stInfo std[5]={
            {"polash","Bangladesh",3.60},
            {"siam","Bangladesh",3.30},
            {"shanto","India",3.85},
            {"Alex","USA",2.98},
            {"Sofia","USA",3.26}
    };
    printf("Student information according to their country address.\n");
    printf("Enter Student Country Name like:- Bangladesh,India, USA: ");
    scanf("%s",&country);
    for(i=0;i<5;i++){
        if(strcmp(std[i].address,country)==0){
            printf("Name: %s, Address: %s , CGPA: %.2f\n",std[i].name,std[i].address,std[i].cgpa );
        }
        else{
            printf("Invalid information. Did not find regarding any information in the Database.");
        }
    }

    printf("Enter Student cgpa : \n");
    scanf("%f",&cgpa);
    for(i=0;i<5;i++){
        if(std[i].cgpa>=cgpa){
            printf("Name: %s, Address: %s , CGPA: %.2f\n",std[i].name,std[i].address,std[i].cgpa );
          }
    }
            /*
        if(country==std[i].address){
            printf("Student%d Name: %s, CGPA: %.2f\n",i+1,std[i].name,std[i].cgpa);
        }
        else if(country==std[i].address){
            printf("Student%d Name: %s, CGPA: %.2f\n",i+1,std[i].name,std[i].cgpa);
        }
        else if(country==std[i].address){
            printf("Student%d Name: %s, CGPA: %.2f\n",i+1,std[i].name,std[i].cgpa);
        }
        else{
            printf("Invalid information. Did not find regarding any information in the Database.");
            break;
        }
        */


return 0;
}
