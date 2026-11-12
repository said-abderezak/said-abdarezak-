#include <stdio.h>
#include <stdbool.h>
int main() {
    int T[10], F[10];
    int  i ;
    bool equal;
    for(i=0; i<10; i++){
    printf("enter the value of T :", i);
    scanf("%d", &T[i]);
    }
    for(i=0; i<10; i++){
    printf("enter the value of F :", i);
    scanf("%d", &F[i]);
    }
    equal=1;
    for(i=0 ;i<10 ;i++) { 
        if(T[i]!=F[i]){
            equal = 0;
        break;}
    }
    printf("equal=%d", equal);
return 0;
}