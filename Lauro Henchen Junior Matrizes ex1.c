#include<stdio.h>
 int main()
{
    int X[15][15];
    int i, j;
    
printf("informe os elementos da matriz\n");
for(i = 0; i < 15; i++){
    for(j = 0; j < 15; j++){
    scanf("%d", &X[i][j]);
    }
}
for(i = 0; i < 15; i++){
    for(j = 0; j < 15; j++){
        if(i == j){
        printf("%d ", X[i][j]);
        }
    }
}
return 0;
}
