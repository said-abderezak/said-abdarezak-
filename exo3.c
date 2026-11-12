#include <stdio.h>
int main(){
int  N ,i ,j ,temp ;

printf("enter the value of N :");
scanf("%d", &N);
int T[N];
for(i=0 ;i<N ;i++){ 
    printf("put in the numbers :");
    scanf("%d", &T[i]);}
    for(i=0 ;i<N-1 ;i++){
        for(j=i+1 ;j<N ;j++){
        if(T[i]>T[j]){
            temp=T[i];
            T[i]=T[j];
            T[j]=temp;
        }





        }
    }
printf("stored array :\n");
for(i=0 ;i<N ;i++){
    printf("%d \n", T[i]);
}
return 0;
}





