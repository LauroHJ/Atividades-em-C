#include<stdio.h>

int main()
{
int o, x, y, r, c;
printf("Oi ^-^ seja bem vindo!\n\n1-Adicao\n2-Subtracao\n3-Multiplicacao\n4-Quociente da divisao\n*Nas proximas operacoes apenas o X vale*\n5-Quadrado\n6-Cubo\n7-Inverso\n");

printf("\n:D operacao desejada ");
scanf("%d", &o);

printf("X: ");
scanf("%d", &x);

printf("Y: ");
scanf("%d", &y);

if(o == 1)
{
r = x + y;

printf("a soma e igual a %d", r);
}
if(o == 2)	
{
r = x - y;

printf("a subtracao e igual a %d", r);
}	
if(o == 3)
{
r = x * y;

printf("a multiplicacao e igual a %d", r);	
}	
if(o == 4)
{
if(y==0)
{
printf("nao existe divisao por 0!");
}
else
{
r = x / y;

printf("o quociente da divisao e igual a %d", r);
}
}	
if(o == 5)	
{
r = x * x;

printf("elevado ao quadrado e igual a %d", r);	
}	
if(o == 6)	
{
r = x * x * x;

printf("elevado ao cubo e igual a %d", r);
}	
if(o == 7)
{
r = -x;

printf("com sinal invertido e igual a %d", r);	
}
printf("\n\nVolte sempre :) S2 S2!");
return 0;	
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

