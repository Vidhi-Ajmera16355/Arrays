#include<stdio.h>
int main(){
    int i,n;
    printf("Enter the size of array : ");
    scanf("%d",&n);

    int arr[n];
    int b[100]={0};
    printf("Enter the elements of the array : ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max = arr[0];
    for (int i=1;i<n;i++){
        if (arr[i]>max);
            max=arr[i];
    }
    max++;
    for (int i=0;i<n;i++){
        b[arr[i]]++;
    }
    for (int i=0;i<max;i++){
        if (b[i]==1)
        printf("Unique elements are %d\n",i);
        if (b[i]>1){
            printf("Duplicate elements are %d\n",i);
        }
    }
}
