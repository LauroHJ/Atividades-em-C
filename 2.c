#include<stdio.h>

int main(){
	
int v, n50, r50, n20, r20, n10, r10, n5, r5, n1, r1;

printf("valor que deseja sacar: ");
scanf("%d", &v);
if(v >= 50){
	
n50 = v / 50;
r50 = v % 50;

printf("notas de 50: ", n50);

n20= r50 / 20;
r20= r50 % 20;
printf("notas de 20: ", n20);

n10= r20 / 10;
r10= r20 % 10;
printf("notas de 10: ", n10);

n5= r10 / 5;
r5= r10 % 5;
printf("notas de 5: ", n5);

n1= r5 / 1;
printf("notas de 1: ", n1);}


return 0;
}

	


