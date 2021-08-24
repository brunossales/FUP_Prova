#include <stdio.h>
  int coprimo(int x, int y){
    int aux=0, resultado=0;
    int i;

      if(x > 1 && y > 1){
        for(i=2; i<=x && i<=y; i++){
            if(x % i == 0 && y % i == 0)
              resultado ++;
        }
      }
    if(resultado == 0)
      return 1;

    else
      return 2;
  }
  int main(){
    int n;
    int i, z, aux;
    printf("Digite um numero inteiro: \n");
    scanf("%d", &n);
    for(i=1; i <= n; i++){
      for(z=1; z <= n; z++){
        coprimo(i, z);
        aux = coprimo(i, z);
          if(aux == 1)
            printf("1 ");
          else 
            printf("0 ");

      }
    printf("\n");
    }
    
    return 0;
  }