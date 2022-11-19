/* Sample program to check performance of row major iteration vs column major iteration 
C stores values using row major order so row major iteration is faster 
*/

#include <stdio.h>
#include <time.h>
int arr[10000][10000]; 
int main()
{
    int i, j;
    clock_t start, stop;
    double time = 0.0;
    //row major iteration
    start = clock();
    for (i = 0; i < 10000; i++)
        for (j = 0; j < 10000; j++)
            arr[i][j] = (arr[i][j] * arr[i][j]);
 
    stop = clock();
    time = ((double)(stop - start) / CLOCKS_PER_SEC)*1000;
    printf("row major order : %lf ms\n", time);

    //column major iteration
    start = clock();
    for (j = 0; j < 10000; j++)
        for (i = 0; i < 10000; i++)
            arr[i][j] = (arr[i][j] * arr[i][j]);
 
    stop = clock();
    time = ((double)(stop - start) / CLOCKS_PER_SEC)*1000;
    printf("column major order : %lf ms", time);
    return 0;
}

/* Sample Output :
row major order : 431.000000 ms
column major order : 791.000000 ms
*/
