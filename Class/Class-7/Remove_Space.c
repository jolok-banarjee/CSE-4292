/* Write a c program to remove all the white spaces from a string.
input : The quick brown fox jumps over the lazy dog. */
#include<stdio.h>
#include<string.h>

int main(){
    char str[200];
    int space, i=0;
    space=0;
    printf("Enter a string : ");
    gets(str);
    printf("Before Enter a string : %s",str);
    for(str[i];str[i] != '\0'; i++){
        if(str[i]==' ' || str[i]= '\n'){
           break;
        }
        //continue;
    }
    printf("\nAfter Remove the spaces from string : %s",str);
    return 0;
}
