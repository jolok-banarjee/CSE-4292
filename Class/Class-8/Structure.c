#include <stdio.h>
#include <string.h>

struct studentData {
        char studentName[50];
        int studentID;
        char contact[11];
        float studentCGPA;
    };
int main()
{
    struct studentData student;
    char name, number;
    int id;
    float cgpa;

    printf("Enter the name of Student: ");
    name=gets(student.studentName);

    printf("Enter Student ID: ");
    id=scanf("%d", &student.studentID);

    printf("Enter Student CGPA: ");
    cgpa=scanf("%f", &student.studentCGPA);

    //printf("Enter Student Contact Number: ");
    //number= gets(  student.contact);



    printf("Name of the student is : %s.",name);
    printf("Student ID : %d.",id);
    printf("Enter Student CGPA: %f", cgpa);
    //printf("Student Contact : %s.",number);


    return 0;

}
