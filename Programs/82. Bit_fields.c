/* Sample programs to understand bit fields in C */
/* Program 1: Bit fields syntax and usage */
#include<stdio.h>
struct datetime{
    unsigned int hour : 5;
    unsigned int min : 6;
    unsigned int sec : 6;
    unsigned int day : 5;
    unsigned int month : 4;
    unsigned int year;
};
int main(){
    struct datetime t = {10,57,32,7,1,2023};
    printf("%u:%u:%u, %u/%u/%u\n",
            t.hour,t.min,t.sec,t.day,t.month,t.year);
    printf("sizeof(t): %u\n",sizeof(t));
    return 0;
} 

/* Program 2 : usage of bit field of size 0 */
#include<stdio.h>
struct time1{
    unsigned int hour : 5;
    unsigned int min : 6;
};
struct time2{
    unsigned int hour : 5;
    unsigned int : 0;
    unsigned int min : 6;
};
int main(){
    struct time1 t1 = {10,57};
    struct time2 t2 = {10,57};
    printf("%u:%u\n%u:%u\n",
            t1.hour,t1.min,t2.hour,t2.min);
    printf("sizeof(t1): %u\n",sizeof(t1));
    printf("sizeof(t2): %u\n",sizeof(t2));
    //printf("%u\n",&(t1.hour));  
    return 0;
} 
