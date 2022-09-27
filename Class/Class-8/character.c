/*Write a program that invokes a function called find()
to perform the following task:
a. Receives a character array and a single character.
b. Returns 1 if the specified character is found in the array, 0 otherwise.
*/
#include <stdio.h>
#include <string.h>

int find(char arr[], char ch);
int main()
{
    char ch, arr[100];
    int len, result;
    printf("Enter a Character array : ");
    gets(arr);
    printf("\nEnter a single Character :");
    scanf("%c",&ch);
    result=find(arr, ch);
    if(result==1){
        printf("The character is found");
    }
    else
    {
        printf("The character is not found");
    }

    return 0;
}

int find(char arr[], char ch)
{
    int i;
    while(arr[i]!='\0'){
    for(i=0;i<arr[i];++i){
        if(ch==arr[i]){
            return 1;
        }

    }
    }
}
