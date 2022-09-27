#include<stdio.h>
struct info{
    char fName[30], contact;
    int id,age;
} p[2];
int main(){
    printf("Input user information\n");
    for(int i=0;i<2;++i){
        fflush(stdin);
        printf("Enter user first name: ");
        scanf("%[^\n]", p[i].fName);
        fflush(stdin);
        printf("Enter user Contact number: ");
        scanf("%[^\n]",&p[i].contact);
        fflush(stdin);
        printf("Enter user id, age : ");
        scanf("%d %d", &p[i].id, &p[i].age);
        fflush(stdin);
    }
    for(int i=0;i<2;++i){
        printf("User first name: %s\n",p[i].fName);
        fflush(stdin);
        printf("User id = %d, contact = %s, age = %d.\n", p[i].id, p[i].contact,p[i].age);
        fflush(stdin);

    }
    return 0;
}
