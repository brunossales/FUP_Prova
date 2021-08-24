#include <stdio.h>

  int main(){
   int x, y;
   int i, resultado=0;
   printf("Digite dois numeros inteiros um por linha e descubra se eles são coprimos: \n");
   scanf("%d", &x);
   scanf("%d", &y);
   for(i=2; i <= x && i <= y; i++){
     if(x % i == 0 && y % i ==0)
        resultado++;
   }
    if(resultado == 0)
      printf("%d e %d são coprimos", x, y);

    else
      printf("%d e %d não são coprimos ", x, y);
    
    return 0;
   }
  