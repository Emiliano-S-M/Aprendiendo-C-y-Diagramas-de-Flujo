#include <stdio.h>

void main(void){

    float Base, Altura, Area;

    printf("\n\tIngrese la base del triangulo\n\t");
    scanf("%f", &Base);
    printf("\n\tIngrese la altura del triangulo\n\t");
    scanf("%f", &Altura);

    Area = (Base * Altura) / 2;

    printf("\n\tEl area del triangulo es: %.2f", Area);

    getchar();
    getchar();

}