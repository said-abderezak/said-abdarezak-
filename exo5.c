#include <stdio.h>
int main(){
int T[5][5]={
{6,2,3,5,6},
{4,6,2,6,1},
{1,3,6,7,9},
{1,6,3,6,8},
{6,0,1,4,6},
    
};
int i , j ;
printf("the matris is :\n");
for(i=0 ; i<5 ; i++){
    for(j=0; j<5 ; j++){
printf("%d ", T[i][j]);
    }
    printf("\n");
}
printf("the even index lines:\n");
for(i=0 ;i<5 ;i=i+2){
        for(j=0 ;j<5 ;j++){
    printf("%d ", T[i][j]);
    
}
  printf("\n");

}
printf("the odd index lines :\n");
for(i=1 ; i<5 ; i=i+2){
    for(j=0 ; j<5 ; j++){ 
        printf("%d", T[i][j]);
    }
    printf("\n");
}
printf("the first diagonal:");
for (i=0 ;i<5 ;i++) {
     printf("%d", T[i][i]);
}
printf("\n");
printf("the second diagonal:");
for(i=0 ;i<5 ;i++){ 
    printf("%d", T[i][4-i]);
}
}