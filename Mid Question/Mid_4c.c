#include<stdio.h>
#include<string.h>

int main()
{
    char s1[10]="he", s2[20]="she", s3[30], s4[30];

    printf("%s", strcpy(s3, s1));
    printf("%s", strcat(strcat(strcpy(s4, s1), "or"), s2));
    printf("%d %d", strlen(s2)+strlen(s3), strlen(s4));

    return 0;
}