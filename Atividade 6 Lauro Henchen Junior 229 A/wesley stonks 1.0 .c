#include<stdio.h>

int main()
{
float x, i, m, s;
printf("Oi Wesley :) seja bem vindo novamente!\nDigite os meses e quanto deseja investir\n\n");

printf("meses:");
scanf("%f", &m);

printf("Quantia que sera investida:");
scanf("%f", &i);
printf("\nveja abaixo os meses e os ganhos totais de cada\n");
x = 0;
while(x <= m){

printf("%.0f %.2f\n", x, s );
s = i + (i*0.06);
i = s;
x = x + 1;

}

return 0;
}

