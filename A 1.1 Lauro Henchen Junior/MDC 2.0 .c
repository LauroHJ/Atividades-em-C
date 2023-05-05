#include<stdio.h>

int main()
{
int s, x,  y, v;

for(s = 1; s <= 8; s = s + 1){
	
printf("informe x: ");
scanf("%d", &x);
printf("informe y: ");
scanf("%d", &y);
 
 while(y != 0){
 v = x % y;
 x = y;
 y = v;
}	
printf("\no mdc e %d", x);
}
return 0;
}
