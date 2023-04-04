#include <stdio.h>    
     
int main()    
{    
    int n;
    printf("Enter the size of array:");
    scanf("%d",&n);
    //Initialize array     
    int arr[n];    
    int max=arr[0];
    //Calculate length of array    
    int length = sizeof(arr)/sizeof(arr[0]);    
    
    //Loop through the array by incrementing value of i     
    for (int i = 0; i < length; i++) { 
        printf("Enter element number %d\n",i+1);
        scanf("%d", &arr[i]);     
    }      
    printf("Elements of the given array are ");
    for (int i=0;i< length;i++){
        printf("%d ",arr[i]);
        if (max<arr[i])
        max=arr[i];
    }
    printf("\nMaximum of the array Elements is %d",max);
    return 0;    
}   
