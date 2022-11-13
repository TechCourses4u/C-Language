/* Sample programs to learn how we can pass 2D array to function in C */

#include<stdio.h>
void print(int arr[3][2],int rows,int cols){
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    arr[2][1]=10;
}

int main()
{
    int marks[3][2] ={
						{73,84},
						{58,90},
						{87,60}
				     }; 
    print(marks,3,2);
    printf("marks[2][1] is %d\n",marks[2][1]);
    return 0;
}


