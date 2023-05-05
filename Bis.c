#include<stdio.h>

int main()  
{
float a, b ;

printf("Nota do primeiro aluno:");
scanf("%f", &a);

printf("Nota do segundo aluno :");
scanf("%f", &b);

if (a>b)
{
	printf("Professor Wesley, a maior nota foi do primeiro aluno e este devera receber 5 chocolates Lacta Bis! ");
}
else if (b>a)
{
	printf(" Professor Wesley, a maior nota foi do segundo aluno e este devera receber 5 chocolates Lacta Bis!.");
}
else if (a==b)
{
	printf("Professor Wesley, ambos os alunos obtiveram a mesma nota e com isso, cada um devera receber 5 chocolates Lacta Bis!");
}

return 0;
}
