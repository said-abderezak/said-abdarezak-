#include <stdio.h>
int main ()
{

    int N , i , max;
    i=0;
    max=0;
    printf("enter N:");
    scanf("%d", &N);
    while (N!=1){
        if(N%2==1){
     N=3*N+1;}
     else {
     N=N/2;}
     
     printf("N= %d \n", N);
     i=i+1;
     if( N>max){
        max=N;
     }
    }
    printf("max= %d \n", max);
    printf("length= %d \n", i);
    
}