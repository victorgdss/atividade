#include <stdio.h>
#include "matematica.h"


int main()
{
    float a;
    printf("Digite o angulo: ");
    scanf("%f", &a);
    a = a*3.14159265358979323846/180;
    float seno = calcular_seno(a);
    float cosseno = calcular_cosseno(a);
    float tangente = calcular_tangente(a);
    printf("o seno e: %f \n", seno);
    printf("o cosseno e: %f\n", cosseno);
    printf("a tangente e: %f\n", tangente);
} 