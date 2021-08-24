#include <stdio.h>

  int main(){
   int n;
   int i, z;
   printf("Digite um numero inteiro: \n");
   scanf("%d", &n);
   for(i=1; i<=n; i++){
      for(z=1; z<=n; z++){
        if(z==i)
          printf("+ ");
        else
          printf("* ");
      }
    printf("\n");
   }
   return 0;
  }