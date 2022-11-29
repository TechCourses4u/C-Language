/* Sample program to swap strings in 2D char arrays using different string notations */
/* Program 1 : swap using array notation */
#include<stdio.h>
int main(){
    char names[5][10] = {
				        "ramesh",
                        "suresh",
                        "deepak",
                        "amit",
                        "varun"	 
				      }; 
    char temp;
    for(int i=0;i<10;i++){
        temp = names[1][i];
        names[1][i] = names[2][i];
        names[2][i] = temp;
    }
    for(int i=0;i<5;i++)
        printf("%s\n",names[i]);
    return 0;
}

/* Program 2: swap using array of pointers notation */
#include<stdio.h>
int main(){
    char *names[5] = {
				        "ramesh",
                        "suresh",
                        "deepak",
                        "amit",
                        "varun"	 
				      }; 
    char *temp;
    temp = names[1];
    names[1] = names[2];
    names[2] = temp;

    for(int i=0;i<5;i++)
        printf("%s\n",names[i]);
    return 0;
}

