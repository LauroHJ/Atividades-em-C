#include <stdio.h>

float mediaAritmetica(float x, float y){
    
    return((x + y) / 2);
}

float mediaPonderada(float x, float y, float px, float py){
    
    return( ( (x * px) + (y * py) )/ (px + py) );
}

int main(){

float x, y, px, py;
char z;

while(z != C)
    printf("A. Média Aritmética\nB. Média Ponderada\nC. SAIR");
    printf("Qual opção deseja?");
    scanf("%s^\n", &z);
switch(z){
    
    case'A'
    printf("valor x:");
    scanf("%f" &x);
    
    printf("valor y:");
    scanf("%f" &y);
    
    printf("resultado da média aritmédica: %2.f", mediaAritmetica(x, y));

    case'B'
    printf("valor x:\n");
    scanf("%f" &x);
    
    printf("valor y:\n");
    scanf("%f" &y);
    
    printf("peso de x:\n");
    scanf("%f" &px);
    
    printf("peso de y:\n");
    scanf("%f" &py);
    
    printf("resultado da média ponderada: %2.f", mediaPonderada(x, y, px, py));
    
    case 'C'
    printf("Até a próxima");
    break;
}
return 0;
}