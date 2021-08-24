#include <stdio.h>
 int conta_char(char* str, char c){
    int cont=0;
    int i;
    for(i=0; str[i] != '\0'; i++){
        if(str[i] == c)
          cont++;
    }
      return cont;
 }
 int main(){
   char str[50];
   char c;
   printf("Digite o nome:\t");
   scanf(" %[^\n]", str);
   printf("Digite a letra a ser contada: \t");
   scanf(" %c", &c);
   printf("Numero de ocorrencias: %d", conta_char(str, c)); 
   return 0;
 }