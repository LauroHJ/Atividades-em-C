#include <stdio.h>

/************************************
* Algoritmos e Programação 2
* Atividade 2.3 – Exercício 3
* Nome do(a)(s) estudante(s):Lauro Henchen Junior, Gabrielly Ferreira
* Nome do professor: Wesley Kanashiro
*************************************/

/* 3.a */
void ordemCrescente(int v[5]) {
  int i, j, aux;
  for(i = 0; i < 5; i++){
    for(j = 0; j < 5; j++){
      if(v[i] > v[j]){
        aux = v[i];
        v[i] = v[j];
        v[j] = aux;

      }
    }
  }
  for(i = 0; i < 5; i++){
    printf(" %d", v[i]);
  }
}
/* 3.b */
void ordemDecrescente(int v[5]) {
  int i, j, aux;
  for(i = 0; i < 5; i++){
    for(j = 0; j < 5; j++){
      if(v[i] < v[j]){
        aux = v[i];
        v[i] = v[j];
        v[j] = aux;

      }
    }
  }
  for(i = 0; i < 5; i++){
    printf(" %d", v[i]);
  }
}

/* 3.c */
int menorElemento(int v[5]) {
  int i, j, aux;
  aux = v[0];
  for(i = 1; i < 5; i++){
      if(v[i] < aux){
        aux = v[i];
        
      }
    }
  
  return aux;
}

/* 3.d */
int maiorElemento(int vet[5]) {
  int aux, i;
  aux = vet[0];
  for (i = 1; i < 5; i++) {
    if (vet[i] > aux) {
    aux = vet[i];
    }
  }
  return aux;
}

/* 3.e */
int somaSequencia(int v[5]) {
  int i, aux;
  for (i = 0; i < 5; i++){
    aux = aux + v[i];
  }
  return aux;
}
/* 3.f */
void imprimeSequencia(int vet[5]) {
  int i;
  printf("Todos os elementos do vetor:");
  for (i = 0; i < 5; i++) {
    printf(" %d ", vet[i]);
  }
}


/* 3.g */
  
 int main(void) {
  char op;
  int V[5], i;


    while (op != 'G'){
    
    printf ("\nObserve o menu abaixo, escolha e digite o número da opcao que deseja executar: \n      A. Ler sequência de 12 números;\n      B. Menor para maior;\n      C. Maior para menor;\n      D. Menor elemento;\n      E. Maior elemento;\n      F. Soma elementos;\n      G.SAIR\n####Opção escolhida: ");
    scanf(" %c", &op);
    switch(op){
      case'A':
      for(i = 0; i < 5; i++){
        scanf("%d", &V[i]);
      }
      break;
      case'B':
        ordemCrescente(V);
      
      break;
      case'C':
        ordemDecrescente(V);
      
      break;
      case'D':
          printf("Menor elemento %d", menorElemento(V));

      break;
      
      case'E':
          printf("Maior elemento %d", maiorElemento(V));
          
      break;
      case'F':
        
          printf("\nO maior elemento é: %d\n", somaSequencia(V));
            
      break;
      case'G':
      printf("\nFim da execução do programa. :)");
      break;
    }
  }
    return 0;
}