#include <stdio.h>
struct book{ 
float price;
char title[10],author[10];
}b1,b2,b3;
int main(){
printf("book1:");
scanf("%s", &b1.title);
scanf(" %s", &b1.author);
scanf(" %f", &b1.price);

printf("book2:");
scanf("%s", &b2.title);
scanf(" %s", &b2.author);
scanf("%f", &b2.price);

printf("book3:");
scanf("%s", &b3.title);
scanf("%s", &b3.author);
scanf("%f", &b3.price);
if(b3.price > b2.price && b3.price > b1.price){
    printf("book3 is most expensive");}
    else if (b2.price >b3.price && b2.price > b1.price){
    printf("book 2 is most expensive");}
    else {
        printf("book 1 is most expensive");
    }

return 0;
}
