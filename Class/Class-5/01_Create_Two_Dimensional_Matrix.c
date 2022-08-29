#include<stdio.h>
int main()
{
    int mat_1[10][10],mat_2[10][10],mat_3[10][10],row,col,i,j;
    printf("Enter the row and coloum number of the two matrix :");
    scanf("%d    %d",&row,&col);
    printf("Enter the elements of the first matrix :\n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {scanf("%d",&mat_1[i][j]);}
    }
    printf("Enter the elements of the second matrix :\n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {scanf("%d",&mat_2[i][j]);}
    }
    printf("\tThe first matrix is :\n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {printf("\t%d\t",mat_1[i][j]);}
        printf("\n");
    }
    printf("\tThe second matrix is :\n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {printf("\t%d\t",mat_2[i][j]);}
        printf("\n");
    }
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {mat_3[i][j]=mat_1[i][j]+mat_2[i][j];}
    }
    printf("\tSum of first and second matrix is :\n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {printf("\t%d\t",mat_3[i][j]);}
        printf("\n");}
    }