#include<stdio.h>

int main()  
{
float t, c ;

printf("Temperatura do passageiro :");
scanf("%f", &t);

printf("codigo do voo :");
scanf("%f", &c);

if (t>36.5)
{
	printf("Suspeita de CoronaVirus: encaminhar para quarentena.");
}
else if (c==1919)
{
	printf("Suspeita de CoronaVirus: encaminhar para quarentena.");
}
else
{
	printf("Passageiro liberado para seguir viagem.");
}

return 0;
}
