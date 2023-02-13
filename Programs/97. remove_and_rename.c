/* Sample program to understand how to remove files and rename files in C */
#include<stdio.h>
#include<stdlib.h>
int main() {
    remove("fread.c");
    rename("fwrite.c","filewrite.c");
    return 0;
}
