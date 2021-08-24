#include <stdio.h>
  int compara(char palavra1[80], char palavra2[80]){
      int comparador=1;
      int i;
      for(i = 0; palavra1[i] != '\0'; i++){
        if(palavra1[i] == palavra2[i])
          comparador = 0;
        else{
          comparador = 1;
          break;
        }
      }
      return comparador;
  }
  int main(){
    char palavra1[80];
    char palavra2[80];
    printf("Digite a primeira String: \n");
    scanf(" %[^\n]", palavra1);
    printf("Digite a segunda String: \n");
    scanf(" %[^\n]", palavra2);
    
    printf("0 caso as String sejam iguais e 1 caso Contrario: %d", compara(palavra1, palavra2));
	
	return 0;
  }