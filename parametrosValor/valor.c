#include <stdio.h>

void funcion(int x) {
    x = x * 2;
    printf("Dentro de la funcion: %d\n", x);
}

void main(void) {
    int a = 5;
    printf("Antes de llamar a la funcion: %d\n", a);
    funcion(a);
    printf("Después de llamar a la funcion: %d\n", a);
    getchar();
    getchar();
}
