#include <stdio.h>
#include <math.h>

double calcularDistancia(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

int main() {
    double x1, y1, x2, y2, x3, y3;

    printf("Ingrese las coordenadas del primer punto (x1 y y1): ");
    scanf("%lf %lf", &x1, &y1);

    printf("Ingrese las coordenadas del segundo punto (x2 y y2): ");
    scanf("%lf %lf", &x2, &y2);

    printf("Ingrese las coordenadas del tercer punto (x3 y y3): ");
    scanf("%lf %lf", &x3, &y3);

    double lado1 = calcularDistancia(x1, y1, x2, y2);
    double lado2 = calcularDistancia(x2, y2, x3, y3);
    double lado3 = calcularDistancia(x3, y3, x1, y1);

    double perimetro = lado1 + lado2 + lado3;

    printf("El perímetro del triángulo es: %.2lf\n", perimetro);

    return 0;
}