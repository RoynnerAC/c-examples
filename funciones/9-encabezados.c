#include <stdio.h>
#include "9-encabezados.h"

int main() {


    int v,r,s;

    // Llama a las 5 funciones
    funcion1();
    funcion2(5, 2.67);
    v = funcion3(10);
    r = funcion4(10); // Se llama a la funcion4 en main
    s = funcion5(10); // Se llama a la funcion5() en main

    // Imprime el valor que retornó funcion3()
    printf("v = %d\n", v);
    // Imprime el valor que retornó funcion4()
    printf("r = %d\n", r);
    // Imprime el valor que retornó funcion5()
    printf("s = %d\n", s);  

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

// funcion4(): Imprime un mensaje. Retorna el valor que recibió como argumento
// decrementado en 2
int funcion4(int x) {
    printf("En funcion4()...\n");
    int y = x - 2; // cambio de resta a suma
    return y;
}

// funcion5(): Imprime un mensaje. Retorna el valor que recibió como argumento
// sumando 5
int funcion3(int x) {
    printf("En funcion3()...\n");
    int y = x + 5; //numero distinto de 2, en mi caso escogi 5
    return y;
}