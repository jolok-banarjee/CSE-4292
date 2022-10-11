#include<stdio.h>
#include<conio.h>
void main(){
    FILE *f1,*f2, *f3;
    int number;
    f1= fopen("data.txt","r");
    f2=fopen("odd.txt","w");
    f3=fopen("even.txt","w");
    //read from data file
    while((fscanf(f1,"%d",&number)!=EOF)){
        if(number%2==0)
            fprintf(f3,"%d ",number); //write to even file
        else
            fprintf(f2,"%d ",number);
    }
    fclose(f1);
    fclose(f2);
    fclose(f3);
    printf("Successfully Store data.");

}