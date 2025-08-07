
#include <stdio.h>
#include <time.h>

// Funcion recursiva para calcular factorial
unsigned long long factorialRecursivo(int n) {
    if (n == 0 || n == 1)
        return 1;
    return n * factorialRecursivo(n - 1);
}

// Funcion iterativa para calcular factorial
unsigned long long factorialIterativo(int n) {
    unsigned long long resultado = 1;
    for (int i = 2; i <= n; i++) {
        resultado *= i;
    }
    return resultado;
}

int main() {
    int numero = 20;
    clock_t inicio, fin;
    double tiempo_usado;

    // Medicion de tiempo para factorial iterativo
    inicio = clock();
    unsigned long long resultado_iterativo = factorialIterativo(numero);
    fin = clock();
    tiempo_usado = ((double)(fin - inicio)) / CLOCKS_PER_SEC;
    printf("Iterativo: %llu (Tiempo: %f segundos)\n", resultado_iterativo, tiempo_usado);

    // Medicion de tiempo para factorial recursivo
    inicio = clock();
    unsigned long long resultado_recursivo = factorialRecursivo(numero);
    fin = clock();
    tiempo_usado = ((double)(fin - inicio)) / CLOCKS_PER_SEC;
    printf("Recursivo: %llu (Tiempo: %f segundos)\n", resultado_recursivo, tiempo_usado);

    return 0;
}
