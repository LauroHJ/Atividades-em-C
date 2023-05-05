#include <stdio.h>
/************************************
* Nome da Disciplina Algoritmos e programação 2
* Atividade 2.2 – Exercício 1
* Nome do(a)(s) estudante(s): Lauro Henchen Junior
* Nome do professor: Wesley Eiji Kanashiro
*************************************/
int main()
{
struct{
    char name[50];
    float not1;
    float not2;
    float not3;
    float media;
}stud[30], w;

int x, y;
printf("Bom dia, boa tarde, ou boa noite professor Wesley ^-^\nobrigado por contar com meu algoritmo!!\n");
for(x = 0; x < 30; x++){
    printf("nome dos alunos:");
    scanf(" %[^\n]", stud[x].name);
    
    printf("nota 1:");
    scanf("%f", &stud[x].not1);
    
    printf("nota 2:");
    scanf("%f", &stud[x].not2);
    
    printf("nota 3:");
    scanf("%f", &stud[x].not3);
}
for(x = 0; x < 30; x++){
    
    stud[x].media = (stud[x].not1 + stud[x].not2 + stud[x].not3) / 3;

}
for(x = 0; x < 30; x++){
    for(y = 0; y < 30; y++){
        
        if(stud[y].media < stud[x].media){
            w = stud[y];
            stud[y] = stud[x];
            stud[x] = w;
            
        }
    }
}
printf("E os alunos que ganharam o bis sÃ£o :D\n");
for(x = 0; x < 10; x++){
    printf("nome do aluno: %s\n", stud[x].name);
    printf("media do aluno: %.2f\n\n", stud[x].media);
}
    return 0;
}
