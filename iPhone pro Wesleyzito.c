#include<stdio.h>

int main()
{
float x, v,m;
printf("Oi Wesleyzito ^-^ seja bem vindo!\nDigite os precos dos sites abaixo\n");

m = 9999.90;

for(x = 1; x <= 10; x = x + 1){
	printf("Informe o valor: ");
	scanf("%f", &v);

	if(v < m){
	m = v;
	}
}
printf("O menor valor dentre os 10 informados e: RS %.2f", m);

return 0;
}
