#include <stdio.h>
#include <math.h>
int main()
{
       int n;
       printf("Enter size of array:");
       scanf("%d",&n);
       int a[n];
       
       for (int i=1;i<=n;i++){
           printf("Enter element number %d: ",i);
           scanf("%d",&a[i]);
       }
       for (int i=n;i>=1;i--){
           printf("%d,",a[i]);
       }
    return 0;
}
