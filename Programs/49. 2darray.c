/* Sample programs to understand 2d arrays in C */

/* program1 : Printing 2d array elements using 2 different notations*/
#include<stdio.h>
int main()
{
    int marks[3][2] ={
						{73,84},
						{58,90},
						{87,60}
				     }; 
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            printf("%d ",marks[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            printf("%d ",*(*(marks + i) + j));
        }
        printf("\n");
    }
    return 0;
}

/* program2 : Printing memory addresses of each element by considering 2d array as array of arrays*/
#include<stdio.h>
int main()
{
    int marks[3][2] ={
						{73,84},
						{58,90},
						{87,60}
				     }; 
    for(int i=0;i<3;i++){
            printf("%u %u\n",marks[i],marks[i]+1);
    }
    return 0;
}


/* program3 : Accessing array elements using pointer */
#include<stdio.h>
int main()
{
    int marks[3][2] ={
						{73,84},
						{58,90},
						{87,60}
				     }; 
    int *p = &marks[0][0];
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            printf("%u %d\n",p,*p);
            p++;
        }
    }
    return 0;
}
