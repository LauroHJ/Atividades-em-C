#include <stdio.h>
/************************************
* Nome da Disciplina Algoritmos e programação 2
* Atividade 2.2 – Exercício 2
* Nome do(a)(s) estudante(s): Lauro Henchen Junior
* Nome do professor: Wesley Eiji Kanashiro
*************************************/
int main()
{
struct{
    char nmres[50];
    int mora;
    float renda;
}apart[8][4], w;

int i, j;
double media;

printf("Bom dia, boa tarde, ou boa noite professor Wesley ^-^\nobrigado por contar com meu algoritmo!!\n");

for(i = 0; i < 8; i++){
    for(j = 0; j < 4; j++){
        printf("nome do responsável:\n");
        scanf("  %[^\n]", apart[i][j].nmres );
        
        printf("numero de moradores:\n");
        scanf("%d", &apart[i][j].mora);
        
        printf("renda:\n");
        scanf("%f", &apart[i][j].renda);
    }
}
printf("andares impares:\n");
for(i = 0; i < 8; i++){
    for(j = 0; j < 4; j++){
        if(i % 2 != 0){
            printf("andar: %d\n", i);
            printf("%s\n", apart[i][j].nmres);
            printf("%d\n", apart[i][j].mora);
            printf("%.2f\n\n", apart[i][j].renda);
        }
    }
}
for(i = 0; i < 8; i++){
    for(j = 0; j < 4; j++){
        media += apart[i][j].renda;
    }
}
media = media / 32;
printf("renda media: %lf\n", media);

for(i = 0; i < 8; i++){
    for(j = 0; j < 4; j++){
        if(apart[i][j].renda > w.renda){
            w = apart[i][j];
        }
    }
}
printf("morador com maior renda: %s", w.nmres);


    return 0;
}