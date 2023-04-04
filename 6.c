#include <stdio.h>    
     
int main()    
{    
    int n,even_count=0,odd_count=0;
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
        if(arr[i]%2==0)
       even_count++;

     else 
       odd_count++;
    }
    printf("\n Even number of elements are %d\n",even_count);
    printf("Odd number of elements are %d",odd_count);
    return 0;    
}   
