#include <stdio.h>

  int main(){
   int n;
   int i, aux=0;
   int numero_triangular;
   printf("Digite um numero inteiro: \n");
   scanf("%d", &n);
   for(i=1; ; i++){
     aux = (i * (i+1) * (i+2));
     if(aux>n){
       printf("Nao e triangular");
       break;
     }
     if(aux == n){
      printf("E triangular sim");
      break;
     }
     aux=0;
   }
   return 0;
  }