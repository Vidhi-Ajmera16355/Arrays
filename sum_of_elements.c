#include <stdio.h>
int main()
{
    int arr[5];
    int sum=0;
    for (int i=0;i<=4;i++){
        printf("Enter element number %d\n",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Sum of total elements of the given array is ");
    for (int i=0;i<=4;i++){
        sum=sum+arr[i];
    }
    printf("%d",sum);
    return 0;
}
