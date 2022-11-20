/* Sample programs to understand pointers to an array in C*/
/* Program1: integer pointer vs pointer to an array */
#include<stdio.h>
int main(){
    int marks[5] = {30,35,25,40,46};
    //pointer to 0th element
    int *p=marks;
    // Pointer to an array of 5 integers
    int (*ptr)[5] = &marks;
    printf("%u %u\n",p,ptr);    
    p++;
    ptr++;
    printf("%u %u\n",p,ptr);   
    return 0;
}

/* Program 2: Dereference operations on pointer to an array */ 
#include<stdio.h>
int main(){
    int marks[5] = {30,35,25,40,46};
    //pointer to 0th element
    int *p=marks;
    // Pointer to an array of 5 integers
    int (*ptr)[5] = &marks;
    printf("%u %u\n",p,ptr);     
    printf("*p:%d\n *ptr:%u\n **ptr:%d\n",*p,*ptr,**ptr);  
    return 0;
}

/* Program 3: 2D array and pointer to an array */
#include <stdio.h>
int main(){
    int marks[3][2] ={
						{73,84},
						{58,90},
						{87,60}
				    }; 
    int (*ptr)[2]=marks;
    printf("%u %u %u\n",ptr,ptr+1,ptr+2);
    printf("%u %u %u\n",*ptr,*(ptr+1),*(ptr+2));
    printf("%d %d %d\n",**ptr,*(*(ptr+1)),*(*(ptr+2)));
    return 0;
}
