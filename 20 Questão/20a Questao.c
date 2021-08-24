#include <stdio.h>
  int palindroma(char palavra[80]){
      int compara = 1;
      int cont = 0, i, z=0;
      char string_invertida[80];
      for(i = 0; palavra[i] != '\0'; i++)
          cont++;

      for(i = cont - 1; i >= 0; i--){
        string_invertida[z] = palavra[i];
        z++;
      }
      for(i = 0; palavra[i] != '\0'; i++){
        if(palavra[i] == string_invertida[i])
          compara = 0;
        else{
          compara = 1;
          break;
        }
      }
      return compara;
  }
  int main(){
    char palavra[80];
    printf("Digite a palavra: \n");
    scanf(" %[^\n]", palavra);

    printf("0 caso seja palíndroma e 1 caso contrario: %d", palindroma(palavra));
	
	return 0;
  }