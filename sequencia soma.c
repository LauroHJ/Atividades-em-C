#include<stdio.h>

int main()
{
int x, v, y;
x = 0;
v = 0;
y = 0;

printf("escreva os numeros que deseja somar\n");
for(x = 1; x <= 12; x = x + 1){
y = 0;
for(x = 1; x <= 8; x = x + 1){
	printf("Informe o numero: ");
	scanf("%d", &v);
y = y + v;
}
printf("a soma e igual: %d\n\n", y);
}
return 0;
}
	


 
