#include <stdio.h>
#include "matematica.h"
#include <math.h>

float calcular_seno(float angulo_radianos)
{
    float seno =  sin(angulo_radianos);
    return(seno);
}

float calcular_cosseno(float angulo_radianos)
{
    float cosseno = cos(angulo_radianos);
    return(cosseno);
}

float calcular_tangente(float angulo_radianos)
{
    float tangente =  sin(angulo_radianos) / cos(angulo_radianos);
    return(tangente);
}


