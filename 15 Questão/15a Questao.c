#include <stdio.h>
 int soma_primos(int vetor[50], int tamanho){
   int soma=0, cont=0;
   int i, z;
      for(i=0; i<tamanho; i++){
        for(z=2; z<vetor[i]; z++){
            if(vetor[i] % z == 0)
                cont++;
        }
        if(vetor[i] != 1 && cont == 0)
          soma += vetor[i];
        
        cont = 0;
      }
   return soma;
 }
 int main(){
   int v[50];
   int tam;
   int i;
   printf("Digite o tamanho do vetor: \n");
   scanf("%d", &tam);
   printf("Digite os numeros um por linha:\n");
    for(i=0; i<tam; i++)
      scanf("%d", &v[i]);
   
   printf("\nA Soma dos primos é: ");
   printf("%d", soma_primos(v, tam));
       
    return 0;
 }