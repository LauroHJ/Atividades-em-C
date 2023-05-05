#include<stdio.h>

int main() {
    
    float x, y, z;
    int w;
    printf("Olá.\nEste programa realiza certas operações matemáticas:\n");
    printf("1 - Adição;\n2 - Subtração;\n3 - Multiplicação;\n4 - Quociente da divisão;\n5 - Potenciação ao quadrado;\n");
    printf("6 - Potenciação ao cubo;\n7 - Inversão de sinal;\n");
    printf("Escolha uma dessas opções para que possamos prosseguir:\t");
    scanf("%d", &w);
    
    if(w>7 || w<1)
        printf("Escolha inválida. Por favor reinicie o programa, e insira uma opção de 1 a 7.");
    else
    {
    switch (w)
    {
        case 1:
            printf("Adição! Vamos lá, insira dois números que deseja somar:\t");
            scanf("%f%f", &x, &y);
            z = x + y;
            printf("O resultado de sua adição é: %.2f", z);
            break;
        case 2:
            printf("Subtração! Vamos lá, insira dois números que deseja subtrair:\t");
            scanf("%f%f", &x, &y);
            z = x - y;
            printf("O resultado de sua subtração é: %.2f", z);
            break;
        case 3:
            printf("Multiplicação! Vamos lá, insira dois números que deseja multiplicar:\t");
            scanf("%f%f", &x, &y);
            z = x * y;
            printf("O resultado de sua multiplicação é: %.2f", z);
            break;
        case 4:
            printf("Quociente de divisão! Vamos lá, insira dois números que deseja dividir:\t");
            scanf("%f%f", &x, &y);
            if(y==0)
                printf("Não existe divisão por zero.");
            else
            {
            z = x/y;
            printf("O resultado de seu quociente de divisão é: %.2f", z);
            }
            break;
        case 5:
            printf("Potenciação ao quadrado! Vamos lá, insira um número de sua escolha:\t");
            scanf("%f", &x);
            z = x * x;
            printf("O resultado de sua potenciação ao quadrado é: %.2f", z);
            break;
        case 6:
            printf("Potenciação ao cubo! Vamos lá, insira um número de sua escolha:\t");
            scanf("%f", &x);
            z = x * x * x;
            printf("O resultado de sua potenciação ao cubo é: %.2f", z);
            break;
        case 7:
            printf("Inversão de sinal! Vamos lá, insira um número de sua escolha:\t");
            scanf("%f", &x);
            z = x/-1;
            printf("Seu número com o sinal oposto é: %.2f", z);
            break;
    }
    printf("\nFique à vontade para realizar as operações que quiser, basta reinicializar o programa.\n");
    printf("Tenha um bom dia.");
    }
    
    return 0;
}