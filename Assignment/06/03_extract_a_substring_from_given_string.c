#include <stdio.h>
#include <string.h> 
int main()
{
   char string[1000], sub[1000];
   int position, length, c = 0;
   printf("Input the string : ");
   gets(string);
   printf("\nInput the position to start extraction : ");
   scanf("%d", &position);
   printf("\nInput the length of substring : ");
   scanf("%d", &length);
 
   while (c < length) {
      sub[c] = string[position+c-1];
      c++;
   }
   sub[c] = '\0';
   printf("The substring retrieve from the string is: \"%s\"\n", sub);
   return 0;
}