-/******************
* Algoritmos e Programação 2
* Professor: Wesley Eiji Kanashiro
* Aluno: Lauro Henchen Junior
* Turma: 229A
******************/


#include <stdio.h>

int main(void){

int S[15], y = 0, x, qn= 0, qp = 0, im = 0, tr = 0, s = 0;
 for(x = 0; x < 15; x++){
scanf("%d", &S[x]);}
    while(y != 6){
printf("informe a sequência de 15 numeros\n");
printf(" 1. Quantidade de elementos negativos\n2. Quantidade de elementos positivos\n3. Mostrar números múltiplos de 3\n4. Mostrar números ímpares\n5. Calcular soma dos elementos da sequência\n6. Sair\n");
printf("comando: ");
scanf("%d", &y);
switch(y){
    case 1:
    for(x = 0; x < 15; x++){
    if(S[x] < 0){
    qn++;
}
}
    printf("numeros negativos: %d", qn);
    break;
    case 2:
 
    for(x = 0; x < 15; x++){
    if(S[x] > 0){
    qp++;
}
}
    printf("numeros positivos: %d", qp);
    break;
    case 3:
    for(x = 0; x < 15; x++){
    if(S[x] % 3 == 0){
    tr++;
}
}
    printf("multiplos de 3: %d", tr);
    break;
    case 4:
    for(x = 0; x < 15; x++){
    if(S[x] % 2 > 0){
    im++;
}
}
    printf("impares: %d", im);
    break;
    case 5:
    for(x = 0; x < 15; x++){
    s = s + S[x];
    printf("soma: %d", s);
}
    break;
}
}
}
