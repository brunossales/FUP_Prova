#include <stdio.h>
    int conta_vogais(char* str){
        int cont=0;
        int i;
          for(i=0; str[i] != '\0'; i++){
              if(str[i] == 'a' || str[i] == 'e' || 
                 str[i] == 'i' || str[i] == 'o' ||
                 str[i] == 'u' || str[i] == 'A' || 
                 str[i] == 'E' || str[i] == 'I' || 
                 str[i] == 'O' || str[i] == 'U')
                          cont++;    
          }
          return cont;
    }
    int main(){
      char str[50];
      printf("Digite alguma frase ou palavra: \n");
        scanf(" %[^\n]", str);
        printf("Numero de vogais: \n");
        printf("%d", conta_vogais(str));
        return 0;
    }