/* Sample program to reverse 2D strings in C */

/* Steps :
1. traverse strings 1 by 1 
2. reverse each string
3. print output
*/

#include<stdio.h>

int my_strlen(char *str){
    int len=0;
    while(*str != '\0'){
        len++;
        str++;
    }
    return len;
}

void swap(char *str,int l,int r){
    char t;
    t=str[l];
    str[l]=str[r];
    str[r]=t;
}

void my_strrev(char *str){
    int len= my_strlen(str);
    int l = 0;
    int r = len-1;    
    while(l<r){
        swap(str,l,r);
        l++;
        r--;
    }
}

int main(){
    char names[5][10] = {
				                    "ramesh",
                            "suresh",
                            "deepak",
                            "amit",
                            "varun"	 
				        }; 
    printf("Initial names are :\n");
    for(int i=0;i<5;i++)
        printf("%s\n",names[i]);

    printf("\nAfter reverse :\n");
    for(int i=0;i<5;i++){
        my_strrev(names[i]);
        printf("%s\n",names[i]);
    }
    return 0;
}

