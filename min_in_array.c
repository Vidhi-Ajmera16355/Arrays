#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of an array:");
    scanf("%d",&n);
    int arr[n];
    int min=arr[0]; //let first element be largest number
    for (int i=0;i<=n-1;i++){
        printf("Enter the element number %d=",i+1);
        scanf("%d",&arr[i]);
    }
    for (int i=0;i<=n-1;i++){
        printf("%d ",arr[i]);
        if (min>arr[i])
        {
        min=arr[i];}
    }
    printf("\n%d",min);
    return 0;
}
