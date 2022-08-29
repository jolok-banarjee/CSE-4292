#include<stdio.h>
int main()
{
   int n, a[20];
   printf("Input size of the array: ");
   scanf("%d", &n);
   printf("Input elements in array: ");
   for(int i=0; i<n; i++)
   {
      scanf("%d",&a[i]);
   }
   printf("Output even elements in array: \n");
   for(int i=0; i<n; i++)
   {
     if(a[i]%2==0)
     printf("%d ", a[i]);
   }
   printf("\nOutput odd elements in array:\n");
   for(int i=0; i<n; i++)
   {
     if(a[i]%2!=0)
     printf("%d ", a[i]);
   }
   return 0;
}