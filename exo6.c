#include <stdio.h>
struct student{
char name[10];
int age;
float marks ;

}S1, S2;

int main(){
printf("name 1: \n");
scanf("%s", &S1.name);
printf("the age 1 : \n");
scanf("%d", &S1.age );
printf("the marks 1:\n ");
scanf("%f", &S1.marks);
printf("name 2: \n");
scanf("%s", &S2.name);
printf("age 2 : \n");
scanf("%d", &S2.age);
printf("marks 2 :\n ");
scanf("%f", &S2.marks);
float totalmarks ;
 
totalmarks = (S1.marks+S2.marks)/2 ;
printf("total marks: %f \n", totalmarks);
return 0;
}
