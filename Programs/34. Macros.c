/* Sample Programs to understand Macros */

/* Program 1. Simple Macro*/
#include<stdio.h>
#define PI 3.14
int main(){
    float radius = 2.5;
    float area,perimeter;
    area = PI * radius * radius;
    perimeter = 2 * PI * radius;
    printf("area : %f, perimeter : %f\n",area,perimeter);
    return 0;
}

/* Program 2. Macro Usage Examples */
#include<stdio.h>
#define AND &&
#define CHECK (x>=40 AND x<=100)
#define PASS printf("Pass")
  
int main(){
    int x = 40;
    if(CHECK)
        PASS;
    else
        printf("fail\n");
    return 0;
}

/* Program 3. Macro using Arguments */
#include<stdio.h>

#define PI 3.14
#define AREA(x) (PI * x * x)
#define SUM(x,y) (x+y)
  
int main(){
    float radius = 2.5;
    float area;
    area = AREA(radius);
    printf("area : %f\n",area);

    int a=10,b=20;
    int sum = SUM(a,b);
    printf("sum : %d\n",sum);
    return 0;
}

/* Program 4. Multi Line Macros */
#include<stdio.h>

#define PRINT printf("Hello ");\
			  printf("World\n");\
              printf("Let's Learn Macros");

int main(){
    PRINT
    return 0;
}

/* Program 5. Macros - Important Points to remember
- No semicolon is required at end of macros
- Macro expansion should be enclosed within ()
- Do not leave blank between macro and its argument
*/

#include<stdio.h>

#define SQUARE(x) (x*x)

int main(){
    int a = 27/SQUARE(3);
    printf("%d\n",a);
    return 0;
}

