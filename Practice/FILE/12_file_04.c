#include<stdio.h>
#include<conio.h>
void main(void){
FILE *x;
int n,i=0;
char call_no[12], t_call[5],t_from[12],durat[5];
x=fopen("file.txt","r");
printf("Call From \tTime \tCall To\t\tDuration\n",call_no,t_call,t_from,durat);
while(!feof(x)){
fseek(x,23L+i,1);
fscanf(x,"%s",call_no);
fseek(x,4L,1);
fscanf(x,"%s",t_call);
fseek(x,15L,1);
fscanf(x,"%s",t_from);
fseek(x,13L,1);
fscanf(x,"%s",durat);
i=1;
printf("%s \t%s \t%s \t%s\n",call_no,t_call,t_from,durat);
}
fclose(x);
}
