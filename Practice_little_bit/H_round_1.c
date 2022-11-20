#include<stdio.h>
int main()
{
    int T, i;
    scanf("%d\n",&T);
    while(T!=0)
    {
        int L, N, count=0, rem=0, D;
        char C;
        scanf("%d %d\n", &L, &N);
        for(i=1; i<=N; i++)
        {
            scanf("%d %c\n", &D, &C);
            D=D+rem;
            if((D>=L) && (C=='C'||C=='A'))
            {
                count++;
                rem=D-L;
            }
            else
            {
                if(((D+rem)>=L) && (C=='C'||C=='A'))
                {
                    count++;
                    rem=D-L;
                }
                else
                {
                    rem=D;
                }

            }
            //printf("Lap: %d\n", count+1);
        }
        printf("Case #%d: %d\n", i+1,count+1);
        T--;
    }
}
