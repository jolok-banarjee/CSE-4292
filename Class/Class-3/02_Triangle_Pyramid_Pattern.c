/* Author: Jolok Banarjee, ID:21014026, AE-02, Aerospace, BSMRAAU */
#include<stdio.h>
#include<conio.h>
int main() {
    int i,j,rows;
    printf("Enter the number of Rows: ");
    scanf("%d", &rows);
     
    for(i = 1; i <= rows; i++) {
    /* Prints one row of triangle */
        for(j = 1; j <= i; ++j) {
           printf("%d",i);
        }
        printf("\n");
    }
    getch();
    return 0;
}