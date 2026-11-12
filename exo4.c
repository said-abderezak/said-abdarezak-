#include <stdio.h>
int main()
{
int N , j, i, count;
printf("enter the value of N :");
scanf("%d", &N);
int T[N];
for(i=0 ;i<N ;i++)
{
printf("put in the elements:");
scanf("%d", &T[i]);
}
count = 0;
for(i=0 ;i<N ;i++)
{
for(j=i+1 ;j<N ;j++)
{
     if(T[i]==T[j]){
    count = count + 1;
    break;}
}
}
printf("the number of duplicate :%d", count);
return 0;
}