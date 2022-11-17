/* Sample programs to understand 3D array in C*/
/* Program 1 : Printing 3D array elements*/
#include<stdio.h>
int main(){
    int marks[2][3][2] = {
                            {
                                {73,84},
                                {58,90},
                                {87,60}
                            },
                            {
                                {70,80},
                                {50,90},
                                {80,60}
                            }
                        };
    for(int i=0;i<2;i++){ 
        for(int j=0;j<3;j++){
            
            for(int k=0;k<2;k++){
                printf("%d ",marks[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}

/* Program 2: Passing 3D array to function */
#include<stdio.h>
void print(int arr[2][3][2],int x,int y,int z){
    for(int i=0;i<x;i++){ 
        for(int j=0;j<y;j++){
            for(int k=0;k<z;k++){
                printf("%d ",arr[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
    arr[1][2][1]=10;
}
int main(){
    int marks[2][3][2] = {
                            {
                                {73,84},
                                {58,90},
                                {87,60}
                            },
                            {
                                {70,80},
                                {50,90},
                                {80,60}
                            }
                        };
    print(marks,2,3,2);
    printf("marks[1][2][1] is %d\n",marks[1][2][1]);
    return 0;
}
