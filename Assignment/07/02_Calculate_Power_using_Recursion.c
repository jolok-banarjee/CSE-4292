#include <stdio.h>
int power(int base, int rep);
int main ()
{
    int base, num;
    again:
    printf("Enter the base and power number: ");
    scanf("%d %d", &base, &num);
    printf("The power %d of base %d is %d.\n", num, base, power(base,num));
    goto again;
    return 0;
}
int power(int base, int rep)
{
   while(base==0 && rep==0){
        break;
   }

    if(base>0 && rep==0)
        return 1;
    else
        return base*power(base, rep-1);
   }
