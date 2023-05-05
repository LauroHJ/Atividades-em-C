#include<stdio.h>

int main ()
{
int k, e, ak, ae, soma;
printf("0 = Par\n1 = impar");

printf("\nKaroline escolhe primeiro:");
scanf("%d", &k);

if(k == 0){
e == 1;
}
else(k == 1);{
e == 0;
}

printf("\napostas de Karoline: ");
scanf("%d", &ak);

printf("apostas de Eiva: ");
scanf("%d", &ae);

soma = ak + ae;

if(soma % 2 == 0)
{
if(k == 0)
{
printf("\nKaroline escolheu par");
printf("\nEiva ficou com impar");
printf("\no resultado das apostas foi %d", soma);
printf("\na vencedora e Karoline");
}
if(k == 1)
{
printf("\nKaroline escolheu impar");
printf("\nEiva ficou com par");
printf("\no resultado das apostas foi %d ", soma);
printf("\na vencedora e Eiva");
}
}

if(soma % 2 == 1)
{
if(k == 0)
{
printf("\nKaroline escolheu par");
printf("\nEiva ficou com impar");
printf("\no resultado das apostas foi %d ", soma);
printf("\na vencedora e Eiva");
}
if(k == 1)
{
printf("\nKaroline escolheu impar");
printf("\nEiva ficou com par");
printf("\no resultado das apostas foi %d", soma);
printf("\na vencedora e Karoline");
}
}
return 0;
}

























