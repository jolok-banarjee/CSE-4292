
#include<stdio.h>
#include<string.h>
int main(){
    char str[50], temp;
    int i,j;
    printf("Enter a string : ");
    scanf("%s",str);

    //Calculating length of string
    int len = strlen(str);
    //Swapping the characters string if previous is greater later 
    for(i=0;i<(len-1);i++){
        for(j=(i+1);j<len;j++){
            if(str[i]>str[j]){
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
    printf("The characters of string after sorting : %s",str);
    return 0;
}