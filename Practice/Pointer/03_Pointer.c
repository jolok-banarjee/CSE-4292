//01.Write a C Program to demonstrate pointer use (& and *) and Access Array Elements Using Pointers.
#include <stdio.h>
int main()
{
  
   int *p, data[5], var = 10;
   p= &var;
 
   printf("Value of variable var is: %d", var);
   printf("\nValue of variable var is: %d", *p);
   printf("\nAddress of variable var is: %p", &var);
   printf("\nAddress of variable var is: %p", p);
   printf("\nAddress of pointer p is: %p", &p);
 
    printf("\nEnter elements: ");
	for (int i = 0; i < 5; ++i)
    	scanf("%d", data + i);
 
	printf("You entered: \n");
	for (int i = 0; i < 5; ++i)
    	printf("%d\n", *(data + i));
   return 0;
}