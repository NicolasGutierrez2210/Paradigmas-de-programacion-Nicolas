#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define N 100000 // Cambia este valor 

// Función recursiva
unsigned long long factorial_recursivo(int n) {
    if (n == 0 || n == 1) return 1;
    else return n * factorial_recursivo(n - 1);
}

// funcion iterativa
unsigned long long factorial_iterativo(int n) {
    unsigned long long resultado = 1;
    for (int i = 2; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}

int main() {
    clock_t inicio, fin;
    double tiempo;

    // Recursivo
    inicio = clock();
    unsigned long long resultado_r = factorial_recursivo(N);
    fin = clock();
    tiempo = (double)(fin - inicio) / CLOCKS_PER_SEC;
    printf("Tiempo de ejecución (recursivo) para %d!: %.10f segundos\n", N, tiempo);

    // Iterativo
    inicio = clock();
    unsigned long long resultado_i = factorial_iterativo(N);
    fin = clock();
    tiempo = (double)(fin - inicio) / CLOCKS_PER_SEC;
    printf("Tiempo de ejecución (iterativo) para %d!: %.10f segundos\n", N, tiempo);

    // Estimacion de memoria usada 
    printf("Uso de memoria aproximado (recursivo): %lu bytes\n", sizeof(unsigned long long) * N);
    printf("Uso de memoria aproximado (iterativo): %lu bytes\n", sizeof(unsigned long long));

    return 0;
}
