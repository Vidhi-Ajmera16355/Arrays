#include <stdio.h>    
     
int main()    
{    
    int n,temp;
    printf("Enter size of array:");
    scanf("%d",&n);
    int arr[n];     
    //Calculate length of array arr    
    int length = sizeof(arr)/sizeof(arr[0]);  
     //Displays original array
    for (int i = 0; i < length; i++) {     
        scanf("%d", &arr[i]);     
    }   
   for (int i=0;i<n;i++){
       for (int j=i+1;j<n;j++){
           if (arr[i]>arr[j]){
               temp=arr[i];
               arr[i]=arr[j];
               arr[j]=temp;
           }
       }
   }
   printf("Ascending order :");
   for (int i=0;i<n;i++){
       printf(" %d, ",arr[i]);
   }
//   ----------------------------------------------------------------
printf("\n");
for (int i=0;i<n;i++){
       for (int j=i+1;j<n;j++){
           if (arr[i]<arr[j]){
               temp=arr[i];
               arr[i]=arr[j];
               arr[j]=temp;
           }
       }
   }
   printf("Descending order:");
   for (int i=0;i<n;i++){
       printf("%d, ",arr[i]);
   }
    return 0;    
}    
