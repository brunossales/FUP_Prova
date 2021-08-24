#include <stdio.h>

  int main(){
   int n;
   int i;
   printf("Digite um numero inteiro: \n");
   scanf("%d", &n);
   printf("Seus divisores entre 2 e ele: \n");
   for(i=3; i<n; i++){
     if(n % i == 0)
      printf("%d\t", i);
   }
  return 0;
  }