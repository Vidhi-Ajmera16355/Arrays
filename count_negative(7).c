#include <stdio.h>    
     
int main()    
{    
    int n,neg=0;
    printf("Enter the size of array:");
    scanf("%d",&n);
    
    int arr[n];     
    
    int length = sizeof(arr)/sizeof(arr[0]);    
    
    for (int i = 0; i < length; i++) { 
        printf("Enter element number %d\n",i+1);
        scanf("%d", &arr[i]);     
    }      
    printf("Elements of the given array are ");
    for (int i=0;i< length;i++){
        printf("%d ",arr[i]);
        if(arr[i]<0)
       neg++;
    }
    printf("\n Total number of negative elements are %d\n",neg);
    return 0;    
}   
