#include <stdio.h>

/************************************
* Algoritmos e Programação 2
* Atividade 2.3 – Exercício 1
* Nome do(a)(s) estudante(s): Gabrielly Ferreira, Lauro Henchen Junior.
* Nome do professor: Wesley Kanashiro
*************************************/

/* 1.a */
float areaQuadrado(float lado) {
  float resultado;
  resultado = lado * lado;
  return resultado;
}

/* 1.b */
float perimetroQuadrado(float lado) {
  float resultado;
  resultado = lado * 4;
  return resultado;
}

/* 1.c */
float areaTriangulo(float base, float altura) {
  float resultado;
  resultado = (base * altura) / 2;
  return resultado;
}

/* 1.d */
float areaTrapezio(float baseMaior, float baseMenor, float altura) {
float resultado;
  resultado = ((baseMaior + baseMenor) * altura) / 2;
  return resultado;
}

// 1.e 
int main(void) {
  float x, y, z;
  char op;
  int a, b, c, d;

 a = 0;
 b = 0;
 c = 0;
 d = 0;

	while (op != 'E'){
	
    printf ("\nObserve o menu abaixo, escolha e digite o número da opção que deseja executar: \n\n      A. Área do Quadrado.\n      B. Perímetro do Quadrado.\n      C. Área do Triângulo.\n      D. Área do Trapézio.\n      E. SAIR.\n\n####Opção escolhida: ");
    
	scanf("%s^\n", &op);

		if (op == 'A' ){
            a = a + 1;
			printf ("informe o tamanho do lado do  quadrado: ");
            scanf(" %f", &x);
            printf("O valor da área é: %.2f\n", areaQuadrado(x));
		}
	
		if (op == 'B' ){
            b = b + 1;
			printf ("informe o tamanho do lado do  quadrado: ");
            scanf(" %f", &x);
            printf("O valor do perimetro é: %.2f\n", perimetroQuadrado(x));
		}
		
		if (op == 'C' ){
            c = c + 1;
			printf ("Informe a base e a altura do triângulo: ");
			scanf(" %f %f", &x, &y);
            printf("O valor da área do triângulo é: %.2f\n", areaTriangulo(x, y));

			}
		
		if (op == 'D' ){
            d = d + 1;
			printf ("Informe a base maior, base menor e a altura do trapézio: ");
			scanf(" %f %f %f", &x, &y, &z);
            printf("O valor da área do trapézioo é: %.2f\n", areaTrapezio(x, y, z));
			}
		
   
	}
    if (op == 'E'){
        printf("\nNÚMERO DE VEZES QUE CADA OPÇÃO FOI ESCOLHIDA:\n");
		printf ("# Opção A foi escolhida %d vez(es).\n", a);
        printf ("# Opção B foi escolhida %d vez(es).\n", b);
        printf ("# Opção C foi escolhida %d vez(es).\n", c);
        printf ("# Opção D foi escolhida %d vez(es).\n", d);	      
		}
        
  return 0;
}