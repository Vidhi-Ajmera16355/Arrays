/* C program to print second largest element of the array*/
//Save it as SecondLargestElementArray.c
#include<stdio.h>
#include<limits.h>
int main(){
    int i,n;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    //Declaring array
    int arr[n];
    printf("Enter the elements of the array : ");
    for(i=0;i<n;i++) {
        scanf("%d",&arr[i]);
    }
    
    //Declaring maximum element
    int maximum = INT_MIN;
    //Comparing with each element and find maximum element
    for(i=0;i<n;i++) {
        if(arr[i] > maximum) {
            maximum = arr[i];
        }
    }
    printf("The maximum value is : %d", maximum);
    int second_max = INT_MIN;
    //Finding Second largest element.
    //Comparing with each element and also checking it is not equal to max
    
    for(i=0;i<n;i++) {
        if(arr[i] > second_max && arr[i]!=maximum) {
            second_max = arr[i];
        }
    }
    printf("\nThe second maximum value is : %d", second_max);
}


----------------------------------------------------------------OR------------------------------------------------------------------------
    #include<stdio.h>

int main(){
    int i,n;
    printf("Enter the size of array : ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter the elements of the array : ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max1,max2 = arr[0];
    
    for(i=0;i<n;i++) {
        if(arr[i] > max1) {
            max2=max1;
            max1=arr[i];
        }
        else if (arr[i]<max1 && arr[i]>max2){
            max2=arr[i];
        }
}
printf("Second max is : %d ",max2);
}
