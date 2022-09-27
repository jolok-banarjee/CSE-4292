#include <stdio.h>

void sort(int n, int arr[]);

int main(){
    int i,n,arr[100];
    printf("Enter the number of array elements:");
    scanf("%d",&n);
    for(i=0;i<n;++i){
        printf("\nEnter the number %d = ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("\nBefore sorting array : ");
    for(i=0;i<n;++i){
        printf("%d ", arr[i]);
    }
    sort(n, arr);

    return 0;
}

void sort(int n,int arr[])
{
    int temp,i,j;
    for(i=1;i<=n-1;i++){
        for(j=1;j<n-i;j++){
            if(arr[j-1]>=arr[j]){
                temp=arr[j-1];
                arr[j-1]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("After sorting arrary : ");
    for(i=0;i<n;i++){
        printf("%d ", arr[i]);
    }

}

