/* Author: Jolok Banarjee, Id: 21014026, AE-02, Aerospace, BSMRAAU */
#include <stdio.h>
int main()
{
   int i,j,rows;

   printf("Input number of rows : ");
   scanf("%d",&rows);
   for(i=1;i<=rows;i++)
   {
	for(j=1;j<=i;j++)
	   printf("%d",i);
	printf("\n");
   }
   return 0;
}