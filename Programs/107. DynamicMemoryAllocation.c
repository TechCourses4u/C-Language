/* Sample program to understand dynamic memory allocation functions - malloc,calloc,realloc and free in C */
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n = 3;
 
    // malloc usage
    int* mptr;
    mptr = (int*) malloc(n * sizeof(int));
    if (mptr == NULL) {
        printf("malloc memory allocation failed\n");
        exit(0);
    }
    else {
        printf("malloc memory allocation successful\n");
        // Initialize array elements
        for (int i = 0; i < n; ++i)
            mptr[i] = i * 10;
        // Print array elements
        printf("Array elements :\n");
        for (int i = 0; i < n; ++i)
            printf("%d ", mptr[i]);
        printf("\n");
    }

    //calloc usage
    int* cptr;
    cptr = (int*) calloc(n, sizeof(int));
    if (cptr == NULL) {
        printf("calloc memory allocation failed\n");
        exit(0);
    }
    else {
        printf("calloc memory allocation successful\n");
        // Initialize array elements
        for (int i = 0; i < n; ++i)
            cptr[i] = i * 10;
        // Print array elements
        printf("Array elements :\n");
        for (int i = 0; i < n; ++i)
            printf("%d ", cptr[i]);
        printf("\n");
    }

    // realloc usage
    n = 5;
    cptr = (int*) realloc(cptr, sizeof(int));
    if (cptr == NULL) {
        printf("realloc memory allocation failed\n");
        exit(0);
    }
    else {
        printf("realloc memory allocation successful\n");
        // Initialize array elements
        for (int i = 3; i < n; ++i)
            cptr[i] = i * 10;
        // Print array elements
        printf("Array elements :\n");
        for (int i = 0; i < n; ++i)
            printf("%d ", cptr[i]);
        printf("\n");
    }

    //free usage
    printf("memory deallocation start\n");
    free(mptr);
    free(cptr);
    printf("memory deallocation success\n");
    return 0;
}

/* Output:
malloc memory allocation successful
Array elements :
0 10 20
calloc memory allocation successful
Array elements :
0 10 20
realloc memory allocation successful
Array elements :
0 10 20 30 40
memory deallocation start
memory deallocation success
*/
