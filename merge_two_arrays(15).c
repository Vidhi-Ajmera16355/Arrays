#include <stdio.h>
int main()
{
    int m = 5 , n = 5 , z, i, j;
    // elements of first Array
    int a[5] = { 1, 2, 3, 4, 5 };
    // elements of Second Array
    int b[5] = { 6, 7, 8, 9, 10 };
    // resultant Array Size Declaration
    z = m + n;
    int c[z];
    // copying array 1 elements into an array
    for (i = 0 ; i < m; i++) {
        c[i] = a[i] ;
    }
    // copying array 2 elements into an array
    for (i = 0, j = m ; j < z && i < n; i++, j++) {
        c[j] = b[i];
    }
    // Array Elements After Merging
    for (i = 0; i<z ; i++) {
        printf("%d ", c[i]);
    }
    return 0;
}
