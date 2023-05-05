#include<stdio.h>

int main(){
int v, n50, r50, n20, r20, n10, r10, n5, r5, n1, r1;

printf("O quanto deseja sacar: ");
scanf("%d", &v);

n50= v/50;
r50= v%50;

n20= r50/20;
r20= r50%20;

n10= r20/10;
r10= r20%10;

n5= r10/5;
r5= r10%5;

n1= r5/1;

printf("\nnotas de 50: %d", n50);
printf("\nnotas de 20: %d", n20);
printf("\nnotas de 10: %d", n10);
printf("\nnotas de 5: %d", n5);
printf("\nnotas de 1: %d", n1);

return 0;
}
