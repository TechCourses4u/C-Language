/* Sample program to understand array of pointers to strings */
#include<stdio.h>
int main(){
    char *names[5] = {
				        "ramesh",
                        "suresh",
                        "deepak",
                        "amit",
                        "varun"	 
				      }; 

    for(int i=0;i<5;i++)
        printf("%u %s\n",names[i],names[i]);
    
    names[2]="akki";
    printf("\n");
    for(int i=0;i<5;i++)
        printf("%u %s\n",names[i],names[i]);
    printf("%c\n",names[3][1]);
    //names[3][1]='n';
    printf("\n%s\n",names[3]);
    return 0;
}

