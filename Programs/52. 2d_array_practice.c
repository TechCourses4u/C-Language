/* Sample programs to practice 2D arrays */

/* Program 1 : Search an element in 2D array */
#include<stdio.h>
int main()
{
    int arr[3][4] ={
						{1,2,3,4},
						{5,6,7,8},
						{9,10,11,12}
				     }; 
    int element =10;
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            if(arr[i][j]==element){
                printf("foudn at arr[%d][%d]\n",i,j);
                return 0;
            }
        }
    }
    printf("Not found\n");
    return 0;
}

/* Program 2: Find Sum of each row and column in 2D array */
#include<stdio.h>
void row_sum(int arr[3][4],int rows,int cols){
    for(int i=0;i<rows;i++){
        int row_sum =0;
        for(int j=0;j<cols;j++){
            row_sum+=arr[i][j];
        }
        printf("row %d sum is %d\n",i,row_sum);
    }
}

void col_sum(int arr[3][4],int rows,int cols){
    for(int i=0;i<cols;i++){
        int col_sum =0;
        for(int j=0;j<rows;j++){
            col_sum+=arr[j][i];
        }
        printf("col %d sum is %d\n",i,col_sum);
    }
}

int main()
{
    int arr[3][4] ={
						{1,2,3,4},
						{5,6,7,8},
						{9,10,11,12}
				     }; 
    row_sum(arr,3,4);
    col_sum(arr,3,4);
    return 0;
}

/* Program 3: Add two 2D arrays and store in another 2D array */
#include<stdio.h>
int main()
{
    int arr1[2][3] ={
						{1,2,3},
						{4,5,6}
				     }; 
    int arr2[2][3] ={
						{7,8,9},
						{10,11,12}
				     }; 
    int arr3[2][3];
    //add arr1 and arr2
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            arr3[i][j]=arr1[i][j]+arr2[i][j];
        }
    }
    //print arr3 elements
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            printf("%d ",arr3[i][j]);
        }
        printf("\n");
    }
    return 0;
}





