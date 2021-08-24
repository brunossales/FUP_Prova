#include <stdio.h>
  void calc_esfera(float r, float* area, float* volume){
    float pi = 3.14;
      *area = 4 * pi * (r * r);
      *volume = (4 * pi * (r * r * r)) / 3;
  }
  int main(){
    float r;
    float area, volume;
    printf("Digite o raio da esfera: \n");
    scanf("%f", &r);
    calc_esfera(r, &area, &volume);
    printf("A area da Superficie é: %.2f\n", area);
    printf("O volume da esfera é: %.2f", volume);
    return 0;
  }