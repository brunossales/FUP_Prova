#include <stdio.h>
#include <stdlib.h>
  void minusculo(char* str){
    int i;
    for(i=0; str[i] != '\0'; i++){
        if(str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
    }
  }
  int main(){
    char str[100];
    printf("Digite alguma palavra ou frase: \n");
    scanf(" %[^\n]", str);
    minusculo(str);
    printf("Com toda a string minuscula:\t%s", str);
	return 0;
  }