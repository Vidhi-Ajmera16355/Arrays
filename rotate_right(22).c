#include <stdio.h>    
     
int main()    
{    
    int n;
    printf("Enter size of array:");
    scanf("%d",&n);
    int arr[n];     
    //Calculate length of array arr    
    int length = sizeof(arr)/sizeof(arr[0]);  
     //Displays original array    
    printf("Original array: \n");    
    for (int i = 0; i < length; i++) {     
        scanf("%d", &arr[i]);     
    }   
    // determine the number of times an array should be rotated    
    int k;
    printf("Enter from where to rotate the array:");
    scanf("%d",&k);
        
    //Rotate the given array by k times toward right    
    for(int i = 0; i < k; i++){    
        int j, last;    
        //Stores the last element of the array    
        last = arr[length-1];    
        
        for(j = length-1; j > 0; j--){    
            //Shift element of array by one    
            arr[j] = arr[j-1];    
        }    
        //Last element of array will be added to the start of array.    
        arr[0] = last;    
    }    
        
    printf("\n");    
        
    //Displays resulting array after rotation    
    printf("Array after right rotation: \n");    
    for(int i = 0; i< length; i++){    
        printf("%d ", arr[i]);    
    }    
    return 0;    
}    
