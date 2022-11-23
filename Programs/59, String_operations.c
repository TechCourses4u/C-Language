/* Sample programs to understand common string operations*/
/* 1. find length of string using strlen library function */
#include<stdio.h>
#include<string.h>
int main(){
    char name1[] = "Tech";
    char name2[] = "Courses";
    int len1=strlen(name1);
    int len2=strlen(name2);
    printf("len1:%d, len2:%d\n",len1,len2);
    return 0;
}

/* 2. Copy one string to another using strcpy library function */
#include<stdio.h>
#include<string.h>
int main(){
    char source[] = "Tech";
    char target[10];
    strcpy(target,source);
    printf("Source : %s\nTarget : %s\n",source,target);
    return 0;
}

/* 3. Compare two strings using strcmp library function */
#include<stdio.h>
#include<string.h>
int main(){
    char name1[] = "Tech";
    char name2[] = "Tech";
    char name3[] = "Courses";
    int res1 = strcmp(name1,name2);
    int res2 = strcmp(name1,name3);
    int res3 = strcmp(name3,name2);
    printf("res1:%d\nres2:%d\nres3:%d\n",res1,res2,res3);
    return 0;
}

/* 4. Concatenate 2 strings using strcat library function */
#include<stdio.h>
#include<string.h>
int main(){
    char source[] = "Courses";
    char target[15] = "Tech";
    strcat(target,source);
    printf("Source : %s\nTarget : %s\n",source,target);
    return 0;
}
