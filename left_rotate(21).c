int main()    
{    
    int k;
  printf("Enter size of array:");
  scanf("%d",&k);
    int arr[k];     
    //Calculate length of array arr    
    int length = sizeof(arr)/sizeof(arr[0]);    
    //n determine the number of times an array should be rotated    
    int n = 3;    
        
    //Displays original array       
    for (int i = 0; i < length; i++) {     
        scanf("%d ", arr[i]);     
    }      
        
    //Rotate the given array by n times toward left    
    for(int i = 0; i < n; i++){    
        int j, first;    
        //Stores the first element of the array    
        first = arr[0];    
        
        for(j = 0; j < length-1; j++){    
            //Shift element of array by one    
            arr[j] = arr[j+1];    
        }    
        //First element of array will be added to the end    
        arr[j] = first;    
    }    
        
    printf("\n");    
        
    //Displays resulting array after rotation    
    printf("Array after left rotation: \n");    
    for(int i = 0; i < length; i++){    
        printf("%d ", arr[i]);    
    }    
    return 0;    
}    
