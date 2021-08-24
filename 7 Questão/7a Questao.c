#include <stdio.h>

  int main(){
    int n;
    int i, z, aux=0;
    int maior_primo=0, menor_primo=0;
    printf("Digite um numero inteiro: \n");
    scanf("%d", &n);
    for(i=n; i > 1; i--){
        aux = 0;
        for(z=2; z<n; z++){
            if(i != z && i % z == 0)
              aux++;
        }
        if(aux == 0){
          maior_primo = i;
          break;
        }
    }
    aux=0;
    for(i=n; ; i++){
        aux=0;
        for(z=2; z<n; z++){
            if(i != z && i % z == 0)
              aux++;
        }
        if(aux == 0){
          menor_primo = i;
          break;
        }
    }
    printf("Maior primo Menor ou Igual a %d é: %d\n", n, maior_primo);

    printf("Menor primo Maior ou Igual a %d é: %d\n", n, menor_primo);

    return 0;
  }