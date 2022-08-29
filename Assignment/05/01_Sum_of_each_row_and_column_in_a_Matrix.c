#include<stdio.h>
 
int main()
{
 	int i, j, rows, columns, a[10][10], Sum; 
 	printf("Enter Number of rows and columns:  ");
 	scanf("%d %d", &i, &j);
 
 	printf("\nEnter elements in matrix of size %dx%d :\n",i,j);
 	for(rows = 0; rows < i; rows++)
  	{
   		for(columns = 0; columns < j; columns++)
    	{
      		scanf("%d", &a[rows][columns]);
    	}
  	}  
 	for(rows = 0; rows < i; rows++)
  	{
  		Sum = 0;
  		for(columns = 0;columns < j; columns++)
  		{
  			Sum = Sum + a[rows][columns];
		}
   		printf("\nSum of Elements of Row %d =  %d",rows+1, Sum );
  	}
 	for(rows = 0; rows < i; rows++)
  	{
  		Sum = 0;
  		for(columns = 0;columns < j; columns++)
  		{
  			Sum = Sum + a[columns][rows];
		}
   		printf("\nSum of Elements of Column %d =  %d",rows+1, Sum );
  	}  	
 	return 0;
}

// #include<stdio.h>
  
// int main()
// {
//     int i, j, rows, columns, a[10][10], Sum;
     
//     printf("Please Enter Number of rows and columns  :  ");
//     scanf("%d %d", &i, &j);
     
//     printf("Please Enter the Matrix Row and Column Elements \n");
//     for(rows = 0; rows < i; rows++)
//     {
//         for(columns = 0; columns < j; columns++)
//         {
//             scanf("%d", &a[rows][columns]);
//         }
//     }
     
//     for(rows = 0; rows < i; rows++)
//     {
//         Sum = 0;
//         for(columns = 0; columns < j; columns++)
//         {
//             Sum = Sum + a[rows][columns];
//         }
//         printf("The Sum of Elements of a Rows in a Matrix =  %d \n", Sum );
//     }
     
//     return 0;
// }