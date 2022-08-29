#include<stdio.h>
 
int main()
{
 	int aSize, bSize, mSize, i, j;
	int a[10], b[10], Merged[20];
 	printf("Enter Array 1 Size :  ");
 	scanf("%d", &aSize);
 	printf("\nEnter Array 1 Elements :  ");
 	for(i = 0; i < aSize; i++)
  	{
      	scanf("%d", &a[i]);
  	}
  	printf("\nEnter Array 2 Size :  ");
 	scanf("%d", &bSize);
 	printf("\nEnter Array 2 Elements :  ");
 	for(i = 0; i < bSize; i++)
  	{
      	scanf("%d", &b[i]);
  	}
  	for(i = 0; i < aSize; i++)
  	{
      	Merged[i] = a[i];
  	}
	mSize = aSize + bSize;
 	for(i = 0, j = aSize; j < mSize && i < bSize; i++, j++)
  	{
  		Merged[j] = b[i];
  	}
 	printf("\nThe new array after merging is: %d\n", mSize); 
 	for(i = 0; i < mSize; i++)
  	{
    	printf(" %d \t ",Merged[i]);
  	}
  	return 0;
}