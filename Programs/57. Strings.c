/* Sample programs to understand strings in C */
/* Program 1 : Various methods to print string elements */
#include <stdio.h>
int main()
{
    char name1[5] = {'T','E','C','H','\0'};
    char name2[] = "TECH";
    printf("sizeof(name1) : %d\n",sizeof(name1));
    printf("sizeof(name2) : %d\n",sizeof(name2));
    //Printing Elements
    //Method 1 : Loop for array size
    int i=0;
    while(i<4){
        printf("%c",name1[i]);
        i++;
    }
    printf("\n");
    //Method 2 : Loop till \0
    i=0;
    while(name2[i] != '\0'){
        printf("%c",name2[i]);
	    i++;
    }
    printf("\n");
    //Method 3 : Using pointer
    char *ptr= name1;
    while(*ptr != '\0'){
        printf("%c",*ptr);
        ptr++;
    }
    printf("\n");
    //Method 4 : Using %s
    printf("%s\n",name1);
    return 0;
}

/* Program 2 : Taking string input through scanf */
#include <stdio.h>
int main()
{
    char name1[25];
    printf("Enter Name:");
    scanf("%s",name1);
    printf("Hello %s\n",name1);

	//Flush buffer
	fflush(stdin);
	
	//Multi word input
    printf("Enter First Name and Last Name:");
    scanf("%[^\n]",name1);
    printf("Hello %s\n",name1);
    return 0;
}
