#include <stdio.h>
/************************************
* Algoritmos e Programação 2
* Atividade 2.3 – Exercício 2
* Nome do(a)(s) estudante(s): Lauro Henchen Junior, Gabrielly Ferreira
* Nome do professor: Wesley Kanashiro
*************************************/
float mediaAritmetica(float x, float y){
    
    return((x + y) / 2);
}

float mediaPonderada(float x, float y){
    
    return( ( (x * 6.5) + (y * 3.5) )/ (6.5 + 3.5) );
}

int main(){

int m = 0, n = 0;
float x, y;
char z;
     printf("Buon Giorno Wesley (^_^)");
while(z != 'C'){
    printf("\n\nA. Média Aritmética\nB. Média Ponderada\nC. SAIR\n");
    printf("Qual opção deseja?\n");
    scanf(" %c", &z);
switch(z){
    
    case'A':
    printf("\nvalor x:");
    scanf("%f", &x);
    
    printf("valor y:");
    scanf("%f", &y);
    
    printf("\nresultado da média aritmédica: %.2f", mediaAritmetica(x, y));
    m = m + 1;
    break;
    case'B':
    printf("\nvalor x:");
    scanf("%f", &x);
    
    printf("\nvalor y:");
    scanf("%f", &y);
    
    printf("\nresultado da média ponderada: %.2f", mediaPonderada(x, y));
    n = n + 1;
    break;

    case 'C':
    printf("Média Aritmédica foi selecionado %d vezes", m);
    printf("\nMédia Ponderada foi selecionado %d vezes", n);
    printf("\nAté a próxima");
    break;
}
}
return 0;
}