/* Sample implementation of common string operations*/
/* 1. implement strlen - to find length of string */
#include<stdio.h>
int my_strlen(char *src){
    int len=0;
    while(*src != '\0'){
        len++;
        src++;
    }
    return len;
}

int main(){
    char name1[] = "Tech";
    char name2[] = "Courses";
    int len1 = my_strlen(name1);
    int len2 = my_strlen(name2);
    printf("len1:%d, len2:%d\n",len1,len2);
    return 0;
}

/* 2. implement strcpy - to copy string */
#include<stdio.h>

void my_strcpy(char *src,char *des){
    while(*src != '\0'){
        *des=*src;
        src++;
        des++;
    }
    *des='\0';
}

int main(){
    char source[] = "Tech";
    char target[10];
    my_strcpy(source,target);
    printf("Source : %s\nTarget : %s\n",source,target);
    return 0;
}

/* 3. implement strcmp - to compare 2 strings */
#include<stdio.h>
int my_strcmp(char* str1, char* str2){
    while(*str1){
        if(*str1 == *str2){
            str1++;
            str2++;
        }
        else{
            break;
        }
    }
    return *str1 - *str2;
}
int main(){
    char name1[] = "Tech";
    char name2[] = "Tech";
    char name3[] = "Courses";
    int res1 = my_strcmp(name1,name2);
    int res2 = my_strcmp(name1,name3);
    int res3 = my_strcmp(name3,name2);
    printf("res1:%d\nres2:%d\nres3:%d\n",res1,res2,res3);
    return 0;
}

/* 4. implement strcat - To concatenate 2 strings */
#include<stdio.h>
void my_strcat(char* des, char* src){
    while(*des)
        des++;
    while(*src){
        *des=*src;
        des++;
        src++;
    }
    *des='\0';
}
int main(){
    char source[] = "Courses";
    char target[15] = "Tech";
    my_strcat(target,source);
    printf("Source : %s\nTarget : %s\n",source,target);
    return 0;
}
