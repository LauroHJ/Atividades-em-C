#include<stdio.h>
int main()
{
    int X[15][15];
    int i, j, s = 0;
    
printf("informe os elementos da matriz\n");
for(i = 0; i < 15; i++){
    for(j = 0; j < 15; j++){
    scanf("%d", &X[i][j]);
    }
}
for(i = 0; i < 15; i++){
    if(i != 7){    
    printf("horizontal %d\n", X[i][7]);
s += X[i][7];    
    }
}
for(j = 0; j < 15; j++){
    if(j != 7){
    printf("vertical: %d\n", X[7][j]);
s += X[7][j];    
    }
}
printf("valor repetido %d", X[7][7]);
printf("soma dos valores %d", s);
return 0;
}