#include <stdio.h>
int main()
{
    int arr[5];
    for (int i=0;i<=4;i++){
        printf("Enter element number %d\n",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Elements of the given array are ");
    for (int i=0;i<=4;i++){
        if (arr[i]<0)
        printf("%d ",arr[i]);
    }
    return 0;
}
