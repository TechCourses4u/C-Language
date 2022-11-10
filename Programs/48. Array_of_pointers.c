#include<stdio.h>
int main()
{
    float a[5] = {30.0,35.0,25.0,40.0,46.0};
    float *p[5] = {a, a+1, a+2, a+3, a+4};
    //Memory map of above 2 arrays
    printf("Memory map:\n");
    printf("a[i]\t   &a[i]    p[i]     &p[i]\n");
    for(int i=0;i<5;i++){
        printf("%f  %u  %u  %u\n",
                a[i],&a[i],p[i],&p[i]);
    }
    //access array a values using array p
    printf("\nAccesssing array a using array p:\n");
    for(int i=0;i<5;i++){
        printf("%f\n",*p[i]);
    }
    //modify 2nd index value of a using p
    printf("\n2nd index modified:\n");
    *p[2]=20.5;
    printf("%u %f %f\n",p[2],*p[2],a[2]);

    //Modify 3rd index value of a directly
    printf("\n3rd index modified:\n");
    a[3]=60.5;
    printf("%u %f %f\n",p[3],*p[3],a[3]);

    // play around with pointers
    printf("\npointers playground:\n");
    printf("%u %u %f\n",p,*p,*(*p));
    return 0;
}

/* Output:
Memory map:
a[i]       &a[i]    p[i]     &p[i]
30.000000  6618624  6618624  6618576
35.000000  6618628  6618628  6618584
25.000000  6618632  6618632  6618592
40.000000  6618636  6618636  6618600
46.000000  6618640  6618640  6618608

Accesssing array a using array p:
30.000000
35.000000
25.000000
40.000000
46.000000

2nd index modified:
6618632 20.500000 20.500000

3rd index modified:
6618636 60.500000 60.500000

pointers playground:
6618576 6618624 30.000000
*/
