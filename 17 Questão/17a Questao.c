#include <stdio.h>
#include <stdlib.h>
#define MAX 100
  char *concatena(char palavra1[50], char palavra2[50]){
      char *nova_palavra = malloc(MAX*sizeof(char));
      int i;
      int aux=0;
      for(i=0; palavra1[i] != '\0'; i++){
          nova_palavra[i] = palavra1[i];
          aux++;
      }
      for(i=0; palavra2[i] != '\0'; i++){
        nova_palavra[aux] = palavra2[i];
        aux++;
      }
      return nova_palavra;
  }
  int main(){
    char primeira_palavra[50];
    char segunda_palavra[50];
    printf("Digite a primeira String: \n");
    scanf(" %[^\n]", primeira_palavra);

    printf("Digite a segunda String: \n");
    scanf(" %[^\n]", segunda_palavra);

    printf("A concatenação das duas String é: \n%s", concatena(primeira_palavra, segunda_palavra));
    
    return 0;
  }