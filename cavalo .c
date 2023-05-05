#include<stdio.h>

int main()
{
int x, y, v;

for(x = 1; x <= 8; x = x + 1){
	
printf("informe x: ");
scanf("%d", &x);
printf("informe y: ");
scanf("%d", &y);
 
 while(y != 0){
 v = x % y;
 x = y;
 y = v;
}	
printf("o mdc e %d", x);
}
return 0;
}
