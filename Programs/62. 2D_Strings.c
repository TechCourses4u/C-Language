/* Sample programs to understand two dimensional character arrays in C */

/* Program 1 : Initializing and printing 2D strings */
#include<stdio.h>
int main(){
    char names[5][10] = {
				        "ramesh",
                        "suresh",
                        "deepak",
                        "amit",
                        "varun"	 
				      }; 
    printf("sizeof(names): %d\n",sizeof(names));

    for(int i=0;i<5;i++)
        printf("%s\n",names[i]);

    printf("names[2][1]: %c\n",names[2][1]);
    printf("string from names[2][1]: %s\n",&names[2][1]);
    
    return 0;
}

/* Program 2 : Taking user input for 2D strings */
#include<stdio.h>
int main(){
    char names[5][10];
    for(int i=0;i<5;i++)
        scanf("%s",names[i]);
    printf("\nEntered names are :\n");
    for(int i=0;i<5;i++)
        printf("%s\n",names[i]);
    return 0;
}

/* Program 3 : Modifying 2D strings */
#include<stdio.h>
int main(){
    char names[5][10] = {
				        "ramesh",
                        "suresh",
                        "deepak",
                        "amit",
                        "varun"	 
				      }; 
    for(int i=1;i<3;i++)
        scanf("%s",names[i]);
    //names[4]="hello";
    printf("\nEntered names are :\n");
    for(int i=0;i<5;i++)
        printf("%s\n",names[i]);
    
    names[3][1]='n';
    printf("\n%s\n",names[3]);
    printf("%c\n",*names[4]);
    return 0;
}

