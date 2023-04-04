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
    printf("Enter the elements \n");
    for (i = 0; i < m; i++)
    {
        scanf("%d", &array[i]);
    }
 
    printf("Input array elements are: \n");
    for (i = 0; i < m; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\nEnter the new element to be inserted: ");
    scanf("%d", &x);
    printf("Enter the position where element is to be inserted: ");
    scanf("%d", &pos);
 
    //shift all elements 1 position forward from the place
    //where element needs to be inserted

    for(i = m-1; i >= pos; i--)
    {    array[i+1]=array[i];
 
    array[pos]=x; //Insert the element x on the specified position
        m++;
    }
    //print the new array
    for (i = 0; i < m; i++)
    {
        printf("%d ", array[i]);
    }
    
}
