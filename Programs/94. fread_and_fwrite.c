/* Sample program to understand fread and fwrite functions in C */

/* Program1 : fwrite example */
/* write record to a file in binary mode*/
#include<stdio.h>
#include<stdlib.h>

struct Student
{
    char name[20];
    int age;
    float marks;
};

int main()
{
    struct Student st;
    FILE *fp; 

    fp = fopen("Student.DAT","wb");
    if(fp==NULL)
    {
        puts("Cannot open file");
        exit(1);
    }

    char moreData = 'y';
    while(moreData=='y')
    {
        printf("\nEnter name, age and marks:");
        scanf("%s %d %f", st.name,&st.age,&st.marks);
        fwrite(&st, sizeof(struct Student),1,fp);

        printf("Add another record(y/n): ");
        fflush(stdin);
        scanf("%c",&moreData);
    }
    fclose(fp);
    return 0;
}

/* Program2 : fread example - single record read */
/*Read records from binary file 
and display them on screen*/
#include<stdio.h>
#include<stdlib.h>

struct Student
{
    char name[20];
    int age;
    float marks;
};

int main()
{
    struct Student st;
    FILE *fp;

    fp = fopen("Student.DAT","rb");
    if(fp==NULL)
    {
        puts("Cannot open file");
        exit(1);
    }

    while(fread(&st,sizeof(struct Student),1,fp)==1)
        printf("%s %d %f\n",st.name,st.age,st.marks);
    
    fclose(fp);
    return 0;
}

/* Program3 : fread example - multiple records read at one go */
/*Read records from binary file 
and display them on screen*/
#include<stdio.h>
#include<stdlib.h>

struct student
{
    char name[20];
    int age;
    float marks;
};

int main()
{
    FILE *fp;
    struct student st[2];
    fp = fopen("Student.DAT","rb");
    if(fp==NULL)
    {
        puts("Cannot open file");
        exit(1);
    }
    int ret = fread(st,sizeof(struct student),2,fp);
    printf("no of records read : %d\n",ret);
    for(int i = 0; i < ret ; i++)
        printf("%s %d %f\n",st[i].name,st[i].age,st[i].marks);
    
    fclose(fp);
    return 0;
}
