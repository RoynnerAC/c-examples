#include <stdio.h>
#include "9-encabezados.h"

int main() {

    int v,r;

    // Llama a las 3 funciones
    funcion1();
    funcion2(5, 2.67);
    v = funcion3(10);
    r = funcion4(10); // llamamos la funcion4 en main
    // Imprime el valor que retornó funcion3()
    printf("v = %d\n", v);
    // Imprime el valor que retornó funcion4()
    printf("r = %d\n", r);
    return 0;

}

// funcion1(): Imprime un mensaje
void funcion1() {
    printf("En funcion1()...\n");
}

// funcion2(): Imprime un mensaje y las variables que recibe como argumento
void funcion2(int a, float b) {
    printf("En funcion2()...\n");
    printf("a = %d, b = %.2f\n", a, b);
}

// funcion3(): Imprime un mensaje. Retorna el valor que recibió como argumento
// incrementado en 2
int funcion3(int x) {
    printf("En funcion3()...\n");
    int y = x + 2;
    return y;
}

int funcion5(int x) {
    printf("en funcion5");
    
// funcion4(): Imprime un mensaje. Retorna el valor que recibió como argumento decrementado en 2
int funcion4(int x) {
    printf("En funcion4()...\n");
    int y = x - 2; // cambio de resta a suma
    return y;
}

