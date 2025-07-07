#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(){

    setlocale(LC_ALL, "");
    
    float a, b, c, d;
    double xn = 0, Eps = 0, Fxn = 0 , x0 = 0, Fdxn = 0;

    printf("------------------------------");
    printf("---Método de Newton-Rhapson---");
    printf("------------------------------");

    printf("Seja a função no formato Ax³ + Bx² + Cx + D\n");
    printf("- Informe o valor A: ");
    scanf("%f", &a);
    printf("- Informe o valor B: ");
    scanf("%f", &b);
    printf("- Informe o valor C: ");
    scanf("%f", &c);
    printf("- Informe o valor D: ");
    scanf("%f", &d);
    printf("Digite o valor inicial da iteração: ");
    scanf("%lf", &xn);
    printf("Digite o valor do Erro: ");
    scanf("%lf", &Eps);
    
    do{

      x0 = xn;
      Fxn = (a*(x0*x0*x0) + b*(x0*x0) + c*(x0) + d);
      Fdxn = (3*a*(x0*x0)) + ((2*b)*(x0)) + c; 
      xn = x0 - (Fxn/Fdxn);

      printf("Iteração = %d \n\n", );
      printf("F(x) = %lf \n", Fxn);
      printf("F'(x) = %lf \n\n", Fdxn);
      printf("x anterio = %lf \n", x0);
      printf("x atual = %lf \n", xn);
      printf("|xn - x0| = %lf \n", fabs(xn - x0));

    } while (fabs(xn - x0) > Eps);

    printf("\n\nNúmero de Iteração = %d\n", );
    printf("Resultado final = %lf\n", xn);
       
}