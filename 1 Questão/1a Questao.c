#include <stdio.h>
#include <math.h>
    int raizes(float a, float b, float c, float* x1, float*x2){
        float d;
        d = ((b*b)-4 * a * c);
            
            if(d > 0){
                *x1 = ((-b + sqrt(d))/(2*a));
                *x2 = ((-b - sqrt(d))/(2*a));
                    return 2;
            }
            else if(d == 0){
                *x1 = ((-b + sqrt(d))/(2*a));
                    *x2 = *x1;
                    return 1;
            }
            else{
                return 0;
            }
    }
    int main(){
        float a, b, c, x1, x2;
        printf("Digite o valor de A: \n");
        scanf("%f", &a);
        printf("Digite o valor de B: \n");
        scanf("%f", &b);
        printf("Digite o valor de C: \n");
        scanf("%f", &c);

            int aux = raizes(a, b, c, &x1, &x2);
            	if(aux == 1)
			          printf("%f", x1);
		          else if(aux == 2)
			          printf("%f\n%f", x1, x2);
		          else
			          printf("Nao tem raiz real");
      return 0;
    }