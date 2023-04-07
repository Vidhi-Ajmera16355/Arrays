#include <stdio.h>
#include <math.h>
int main()
{
       int n;
       printf("Enter size of array:");
       scanf("%d",&n);
       int a[n],b[n],c[n];
       int j=0;
       int k=0;
       for (int i=0;i<n;i++){
           printf("Enter element number %d: ",i);
           scanf("%d",&a[i]);
       }
       for (int i=0;i<n;i++){
           if (a[i]%2==0){
           b[j]=a[i];
           j++;
           }
           else {
           c[k]=a[i];
           k++;
           }
       }
       for (int i=0;i<j;i++){
           printf(" Even are : %d,",b[i]);
       }
       printf("\n");
       for (int i=0;i<k;i++){
           printf("Odd are : %d,",c[i]);
       }
    return 0;
}
