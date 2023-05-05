 #include <stdio.h>

/************************************
* Algoritmos e Programação 2
* Atividade 2.3 – Exercício 3
* Nome do(a)(s) estudante(s):Lauro Henchen Junior, Gabrielly Ferreira
* Nome do professor: Wesley Kanashiro
*************************************/

void imprimeSequencia(int vet[12]) {
  int i;
  printf("vetor:");
  for (i = 0; i < 12; i++) {
    printf(" %d ", vet[i]);
  }
  printf("\n\n");
}
void ordemCrescente(int d[12]) {
  int i, j, aux;
  int v[12];
  for(i = 0; i < 12; i++){
    v[i] = d[i];
  }
  for(i = 0; i < 12; i++){
    for(j = 0; j < 12; j++){
      if(v[i] < v[j]){
        aux = v[i];
        v[i] = v[j];
        v[j] = aux;

      }
    }
  }
 imprimeSequencia(v);
}

void ordemDecrescente(int d[12]) {
  int i, j, aux;
  int v[12];
  for(i = 0; i < 12; i++){
    v[i] = d[i];
  }
  for(i = 0; i < 12; i++){
    for(j = 0; j < 12; j++){
      if(v[i] > v[j]){
        aux = v[i];
        v[i] = v[j];
        v[j] = aux;

      }
    }
  }
   imprimeSequencia(v);
}

int menorElemento(int v[12]) {
  int i, j, aux;
  aux = v[0];
  for(i = 1; i < 12; i++){
      if(v[i] < aux){
        aux = v[i];
        
      }
    }
  
  return aux;
}

int maiorElemento(int vet[12]) {
  int aux, i;
  aux = vet[0];
  for (i = 1; i < 12; i++) {
    if (vet[i] > aux) {
    aux = vet[i];
    }
  }
  return aux;
}

int somaSequencia(int v[12]) {
  int i, aux = 0;
  for (i = 0; i < 12; i++){
    aux = aux + v[i];
  }
  return aux;
}
  
 int main(void) {
  char op;
  int V[12], i;

    printf("Buon Giorno (^_^)");
    while (op != 'G'){
    
    printf (" \nObserve o menu abaixo, escolha e digite o número da opcao que deseja executar: \n      A. Ler sequência de 12 números;\n      B. Menor para maior;\n      C. Maior para menor;\n      D. Menor elemento;\n      E. Maior elemento;\n      F. Soma elementos;\n      G. SAIR\n      Opção escolhida: ");
    scanf(" %c", &op);
    switch(op){
      case'A':
      printf("Insira os números:");
      for(i = 0; i < 12; i++){
        scanf("%d", &V[i]);
        }
      printf("\n\n");
      break;
      case'B':
        ordemCrescente(V);
      
      break;
      case'C':
        ordemDecrescente(V);
      
      break;
      case'D':
          imprimeSequencia(V);
          printf("Menor elemento %d\n\n", menorElemento(V));

      break;
      
      case'E':
          imprimeSequencia(V);
          printf("Maior elemento %d\n\n", maiorElemento(V));
          
      break;
      case'F':
          imprimeSequencia(V);
          printf("A soma dos elemntos: %d\n\n", somaSequencia(V));
            
      break;
      case'G':
      printf("\nFim da execução do programa. Até a próxima :D");
      break;
    }
  }
    return 0;
}