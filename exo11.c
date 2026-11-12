#include <stdio.h>
int main (){
int week , days , remaining ;
printf("enter the number of days:");
scanf("%d", &days);
week=days/7;
remaining=days%7;
printf("number of weeks: %d \n", week);
printf("the remainder days: %d \n", remaining);
return 0;
}