/* Sample program to understand how we can compare structures */
/* Program 1 : structure variables comparision */
#include<stdio.h>
struct date{
    int day;
    int month;
    int year;
};

int compare(struct date date1,struct date date2){
    if(date1.day==date2.day && date1.month==date2.month &&
        date1.year==date2.year)
        return 1;
    return 0;
}
int main(){
    struct date date1 = {5,2,2022};
    struct date date2 = {5,2,2020};
    if(compare(date1,date2))
        printf("both structures contain same data\n");
    else
        printf("both structures contain different data\n");
    return 0;
}

/* Program 2 : structure pointers comparision */
#include<stdio.h>
struct date{
    int day;
    int month;
    int year;
};

int main(){
    struct date date1 = {5,2,2022};
    struct date date2 = {5,2,2022};
    struct date *ptr1 = &date1;
    struct date *ptr2 = &date2;
    if(ptr1==ptr2)
        printf("point to same structure\n");
    else
        printf("point to different structures\n");
    return 0;
}
