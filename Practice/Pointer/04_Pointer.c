//02.Write a program to swap value of two variables and to find biggest among three numbers using pointer.
#include <stdio.h>
 
int main()
{
   int x, y, z, *a, *b, temp;
 
   printf("Enter the value of x and y and z:\n");
   scanf("%d%d", &x, &y , &z);
   int*ptra=&x,*ptrb=&y,*ptrc=&z;
   printf("Before Swapping\nx = %d\ny = %d\n", x, y);
   a = &x;
   b = &y;
   temp = *b;
   *b = *a;
   *a = temp;
   printf("After Swapping\nx = %d\ny = %d\n", x, y);
   if((*ptra>*ptrb && *ptra>*ptrc))
    	printf("biggest number=%d",*ptra);
	else if((*ptrb>*ptra && *ptrb>*ptrc))
    	printf("biggest number =%d",*ptrb);
	else
    	printf("biggest number=%d",*ptrc);
 
   return 0;
}
