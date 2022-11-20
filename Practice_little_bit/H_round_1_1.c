#include<stdio.h>
int main()
{
    int T,N,D,L,i,j,count,rem=0;
    char ch[10000];
    scanf("%d",&T);
    for(i=0; i<T; i++)
    {
        scanf("%d%d",&L,&N);
        count=0;
        for(j=0; j<N; j++)
        {
            scanf("%d %c",&D,&ch[j]);
            D=D+rem;
            if(D>=L)
            {
                rem=D-L;
                if(rem>=0 && ch[j]==ch[j-1])
                {
                    count++;
                    while(rem>L)
                    {
                        rem=rem-L;
                        count++;
                    }
                }
            }
            else
            {
                rem=D;
            }
        }
        printf("Case #%d:%d\n",i+1,count);    
    }
}
