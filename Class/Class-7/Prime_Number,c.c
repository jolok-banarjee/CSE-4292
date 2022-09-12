#include <stdio.h>

void primeNumber(int number);
int checkPrimeNumber(int n);
int main(){
    //int a;
    //primeNumber(a);
    int n1, n2, i, flag;
    printf("Enter Two integer Number : ");
    scanf("%d %d",&n1, &n2);
    printf("Prime Number between %d and %d are : ", n1, n2);
    for (i = n1+1; i<n2;++i){
        flag= checkPrimeNumber(i);
        if(flag==1){
            printf("%d", i);
        }
    }
    return 0;
}

int checkPrimeNumber(int n){
    int j , flag=1;
    for (j =2; j<=n/2; ++j){
        if (n%j==0){
            flag = 0;
            break;
        }
    }
    return flag;
}
/*
void primeNumber(int number){
    printf("Enter an Integer Number : ");
    scanf("%d", &number);

    while(number>=2){
            if(number%2==0){
                printf("%d is not a prime number", number);
                break;
            }
            else{
                printf("%d is a prime number", number);
                break;
            }
    }

}
*/
