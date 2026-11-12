#include <stdio.h>

int main() {
    int T[10];
    int n , i ;
    for (int i = 0; i < 10; i++)  
    {
        printf("enter the value of T:", i);
        scanf("%d", &T[i]);
    }
    printf("enter the value of n:");
    scanf("%d", &n);
    int count = 0 ;
    for(int i=0; i < 10; i++){
    if(T[i]== n ){
        count++;
    }
}
printf("n is appear: %d", count);
    return 0;
}
