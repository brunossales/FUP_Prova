#include <stdio.h>
  int conta_caractere(char palavra[80]){
    int cont=0;
    int i;
    for(i=0; palavra[i] != '\0'; i++)
      cont++;
    
    return cont;
  }
  int main(){
    char pala[80];
    printf("Digite a Palavra: \n");
    scanf(" %[^\n]", pala);
    printf("O número de caractere é: %d", conta_caractere(pala));
    
    return 0;
  } 