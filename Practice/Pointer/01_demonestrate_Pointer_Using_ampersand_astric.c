/* 1.  C program to demonstrate pointer use (& and *). */
#include <stdio.h>
int main()
{
  
   int *p;
 
   int var = 10;
 
   p= &var;
 
   printf("Value of variable var is: %d", var);
   printf("\nValue of variable var is: %d", *p);
   printf("\nAddress of variable var is: %d", &var);
   printf("\nAddress of variable var is: %d", p);
   printf("\nAddress of pointer p is: %d", &p);
   return 0;
}
