#include <stdio.h>
#include <stdlib.h>
#define MAX 100
char* concatena(char primeira[], char segunda[], int n){
  char * nova_string = malloc(MAX*sizeof(char));
  int i, aux=0, cont = 1;
  for(i=0; primeira[i] != '\0'; i++){
      nova_string[i] = primeira[i];
          aux++; 
  }
  for(i = 0; segunda[i] != '\0'; i++){
    if(cont <= n){
        nova_string[aux] = segunda[i];
        aux++;
        cont++;
    }
  }
  return nova_string;
}
int main(){
  int n;
  char palavra1[50];
  char palavra2[50];
  printf("Digite a Primeira String:\n");
  scanf(" %[^\n]", palavra1);
  printf("Digite a Segunda String:\n");
  scanf(" %[^\n]", palavra2);
  printf("Digite o numero de caractere a ser concatenado da Segunda String para a Primeira: \n");
  scanf("%d", &n);

  printf("A nova String é: \n");
  printf("%s", concatena(palavra1, palavra2, n));
  return 0;
}