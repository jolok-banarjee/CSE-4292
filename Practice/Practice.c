/* String equal or not */

// #include <stdio.h>
// #include<string.h>

// int main()
// {
//     char s1[100], s2[100];
//     int n;

//     printf("Enter the 1st String : ");
//     gets(s1);
//     printf("Enter the 2nd String : ");
//     gets(s2);
//     n = strcmp(s1,s2);
//     if(n==0)
//         printf("both of string are equal");
//     else
//         printf("both of string are not equal");

//     return 0;
// }

/* Merged two string */
// #include <stdio.h>
// #include <string.h>
// int main ()
// {
//     char s1[100], s2[100];
//     printf("Enter 1st string : ");
//     gets(s1);
//     printf("Enter 2nd string : ");
//     gets(s2);
//     strcat(s1,s2);
//     printf("Merged String : %s",s1);
//     return 0;
// }

/* Vowel or Consonent */
// #include <stdio.h>
// int main()
// {
//     char ch;
//     printf("Enter a Character : ");
//     scanf("%c", &ch);
//     if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
//         printf("%c is a Vowel.", ch);
//     else if((ch>='a'&& ch<='z') || (ch>='A'&&ch<='Z'))
//         printf("%c is a Consonent.",ch);
//     else
//         printf("Invalid Input");

//     return 0;
// }

/* Find Frequency of string */
// #include <stdio.h>
// #include <string.h>
// int main(){
//     char str[100], ch;
//     int len, count=0;
//     printf("Enter a String : ");
//     gets(str);
//     printf("Enter a Character to Search : ");
//     scanf("%c", &ch);
//     len=strlen(str);
//     for(int i=0; i<=len;i++){
//         if(ch==str[i]){
//             count++;
//         }
//     }
//     printf("The character %c in string : %d",ch,count);
//     return 0;
// }

/* Count  character in a string */
// #include <stdio.h>
// #include <string.h>
// int main(){
//     char str[100];
//     int i, count=0;
//     printf("Enter a string : ");
//     gets(str);
//     for(i=0; str[i]!='\0';i++){
//         if(str[i]==' ' || str[i+1]!='\0' ){
//             count++;
//         }
//     }
//     printf("The number of character present in this string are : %d", count+1);
//     return 0;
// }

