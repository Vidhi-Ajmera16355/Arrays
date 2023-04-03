#include <stdio.h>
int main()
{
    int n , x;
    int count=0;
    printf("Enter size of the array:");
    scanf("%d",&n);
    printf("Enter the maximum number:");
            scanf("%d",&x);
    int arr[n];
        for (int i=0;i<=n-1;i++){
            printf("Enter the element number %d : ",i+1);
            scanf("%d",&arr[i]);
            if (arr[i]>x) count++;
        }
        
        for (int i=0;i<=n-1;i++){
            printf("%d ",arr[i]);
        }
        printf("\nCount = %d",count);
    return 0;
}
