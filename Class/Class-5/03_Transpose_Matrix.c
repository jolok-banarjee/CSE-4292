#include<stdio.h>
void main()
{
    int matrix1[10][10], matrix2[10][10], row, column, i, j;
    printf("Enter The Size of Martrix : ");
    scanf("%d%d",&row, &column);
    printf("\nEnter The Elements of the Matrix : \n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<column; j++)
        {
            scanf("%d",&matrix1[i][j]);
        }
    }
    printf("\tThe matrix is :\n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<column; j++)
        {
            printf("\t%d\t",matrix1[i][j]);
        } 
        printf("\n");
    }
    for(i=0; i<column; i++)
    {
        for(j=0; j<row; j++)
        {
            matrix2[i][j]=matrix1[j][i];
        }
    }
    printf("\tThe Transpose Mtrix is :\n");
    for(i=0; i<column; i++)
    {
        for(j=0; j<row; j++)
        {
            printf("\t%d\t",matrix2[i][j]);
        }
        printf("\n");
    }
}