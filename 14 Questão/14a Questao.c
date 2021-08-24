#include <stdio.h>
  float potencia(float a, int b){
    int i;
    float aux = 1;
    for(i=1; i<=b; i++)
        aux *= a;

    return aux;
  }
  void imprime(int i, int j){
    for(i=2; i<=10; i++){
        for(j=0; j<=10; j++){
            printf("%.1f \t", potencia(i, j));
        }
      printf("\n");
    }
  }
  int main(){
    int b;
    int a;
    imprime(a, b);
    
    return 0;
  }