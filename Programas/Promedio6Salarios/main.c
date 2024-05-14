#include <stdio.h>

void main(void){

    int Clave;
    float sueldo1, sueldo2, sueldo3, sueldo4, sueldo5, sueldo6, Ingresos, Promedio;
    printf("\n\tIngrese la clave del empleado: \n\t");
    scanf("%i", &Clave);
    printf("\n\tIngrese los 6 primeros salarios del empleado\n\t");
    scanf("%f \t %f \t %f \t %f \t %f \t %f", &sueldo1, &sueldo2, &sueldo3, &sueldo4, &sueldo5, &sueldo6);

    Ingresos = (sueldo1 + sueldo2 + sueldo3 + sueldo4 + sueldo5 + sueldo6);
    Promedio = Ingresos / 6;

    printf("\n\tEl empleado con clave: %i", Clave);
    printf("\n\tPercibe un salario semestral neto de: %.2f", Ingresos);
    printf("\n\tCon un promedio mensual de: %.2f", Promedio);
    getchar();
    getchar();
}