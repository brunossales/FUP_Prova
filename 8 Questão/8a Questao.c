#include <stdio.h>

  int main(){
   int n;
   int i, z;
   printf("Digite um numero inteiro: \n");
   scanf("%d", &n);
   for(i=1; i<=n; i++){
     for(z=1; z<=i; z++)
        printf("%d ", z);
    printf("\n");
   }
   return 0;
  }