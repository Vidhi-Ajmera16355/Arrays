#include <stdio.h>
int main()
{
    int n , x;
    int sumEven=0;
    int sumOdd=0;
    printf("Enter size of the array:");
    scanf("%d",&n);
    int arr[n];
        for (int i=0;i<=n-1;i++){
            printf("Enter the element number %d : ",i+1);
            scanf("%d",&arr[i]);
            if (i%2==0) sumEven+=arr[i];
            else sumOdd+=arr[i];
            
        }
        
        for (int i=0;i<=n-1;i++){
            printf("%d ",arr[i]);
        }
        printf("\n sumOdd = %d",sumOdd);
        printf("\n sumEven = %d",sumEven);
        printf(" Difference between even and odd is %d",sumEven-sumOdd);
    return 0;
}
