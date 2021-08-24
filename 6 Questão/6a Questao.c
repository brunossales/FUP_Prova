#include <stdio.h>
  void divisor(int n){
    int i;
    for(i=3; i < n; i++){
      if(n % i == 0)
        printf("%d\n", i);
    }
  }
  int main(){
    int n;
    printf("Digite um numero inteiro: \n");
    scanf("%d", &n);
    divisor(n);
	return 0;
  }