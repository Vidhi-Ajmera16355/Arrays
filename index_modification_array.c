#include <stdio.h>
int main()
{
    int n;
    printf("Enter size of the array:");
    scanf("%d",&n);
    int arr[n];
        for (int i=0;i<=n-1;i++){
            printf("Enter the element number %d : ",i+1);
            scanf("%d",&arr[i]);
            if (i%2!=0) arr[i]*=2;
            else arr[i]+=10;
        }
        
        for (int i=0;i<=n-1;i++){
            printf("%d ",arr[i]);
        }
    return 0;
}
