#include <stdio.h>
void main()
{
    int n;
    printf("Enter size of array:");
    scanf("%d",&n);
    int array[n];
    int i, m, x, pos;
 
    printf("Enter the number of elements in the array \n");
    scanf("%d", &m);
    if (m==0){
        printf("No data");
    }
    else {
    printf("Enter the elements \n");
    // insert elements
    for (i = 0; i < m; i++)
    {
        printf("arr[%d]=",i);
        scanf("%d", &array[i]);
    }
 //Enter position of element to be deleted..
    printf("\nEnter the position where element is to be deleted(a/c to index): ");
    scanf("%d", &pos);

    for(i = pos-1 ; i<m-1 ; i++)
    {    array[i]=array[i+1];
    
    }
    printf("\nThe resultant array:\n");
    }
    //print the new array
    for (i = 0; i < m-1; i++)
    {
        printf("arr[%d]=",i);
        printf("%d\n", array[i]);
    }
    
}
