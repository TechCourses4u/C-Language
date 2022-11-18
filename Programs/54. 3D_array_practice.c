/* Sample practice Programs for 3D arrays*/

/* Program1 : Find square of each element and store in another 3D array*/
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
    int marks2[2][3][2];
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            for(int k=0;k<2;k++){
                marks2[i][j][k]=marks[i][j][k]* marks[i][j][k];
            }
        }
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            for(int k=0;k<2;k++){
                printf("%d ",marks2[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}

/* Program2 : Count number of positive and negative numbers in array */
#include<stdio.h>
int main(){
    int marks[2][3][2] = {
                            {
                                {-73,84},
                                {58,-90},
                                {87,60}
                            },
                            {
                                {70,-80},
                                {-50,-90},
                                {80,60}
                            }
                        };
    int pos=0,neg=0;
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            for(int k=0;k<2;k++){
                if(marks[i][j][k]>0)
                    pos++;
                else
                    neg++;
            }
        }
    }
    printf("pos: %d, neg: %d\n",pos,neg);
    return 0;
}
    
