/*1.	C program to count the total number of words in a string.*/
/* Author: Jolok Banarjee, ID: 21014026, AE-02, Aerospace, BSMRAAU */
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
  	int i, count;
  	count = 0;
  	printf("Please Enter any String[100] :  ");
  	gets(str); 	   	
	for(i = 0; str[i] != '\0'; i++)
	{
		if(str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
		{
			count++;	
		} 
	}	
	printf("The Total Number of Words in this String %s  = %d", str, count+1);
  	return 0;
}