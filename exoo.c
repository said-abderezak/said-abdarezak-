#include <stdio.h>
struct time{
int hour , minutes ,seconds;
}t1 , t2 ,t3 ;
int main (){
printf ("enter the first time :");
scanf("%d", &t1.hour);
scanf("%d:", &t1.minutes);
scanf("%d:", &t1.seconds);
printf("enter the second time:");
scanf("%d", &t2.hour);
scanf("%d:", &t2.minutes);
scanf("%d", &t2.seconds);
t3.hour = t1.hour + t2.hour ;
t3.minutes = t1.minutes + t2.minutes ;
t3.seconds = t1.seconds + t2.seconds ;
t3.minutes = t3.minutes + t3.seconds/60 ;
t3.seconds = t3.seconds % 60 ;
t3.hour = t3.hour +  t3.minutes/60 ;
t3.minutes = t3.minutes % 60 ;
printf("%d:%d:%d", t3.hour,t3.minutes,t3.seconds);


return 0;




}