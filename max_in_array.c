#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of an array:");
    scanf("%d",&n);
    int arr[n];
    int max=arr[0]; //let first element be smallest number
    for (int i=0;i<=n-1;i++){
        printf("Enter the element number %d=",i+1);
        scanf("%d",&arr[i]);
    }
    for (int i=0;i<=n-1;i++){
        printf("%d ",arr[i]);
        if (max<arr[i])
        {
        max=arr[i];}
    }
    printf("\n%d",max);
    return 0;
}
