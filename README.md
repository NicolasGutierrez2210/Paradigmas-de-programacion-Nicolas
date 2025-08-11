# Como ejecutar el codigo de phyton

- Este codigo se realizo mediante google colab por lo cual es NECESARIO ejecutarlo desde ahi para que no ocurra ni un tipo de error de compilacion.

- Asegurarse de incluir las librerias necesarias.


# Como ejecutar el codigo de c

- Tener un compilador compatible con c (gcc por ejemplo)
- Despues guardarlo como: medir_memoria.c
- Compilamos como: gcc medir_memoria.c -o medir_memoria
- Damos permisos y ejecutamos con lo siguiente:  chmod +x medir_memoria
./medir_memoria




---
# Comparación de funciones recursivas e iterativas para el cálculo del factorial

## Propósito de la tarea

El objetivo es comparar la eficiencia entre funciones recursivas e iterativas para calcular el factorial en dos lenguajes de programación: **Python** y **C**. Se mide el tiempo de ejecución y el uso de memoria para analizar el rendimiento en cada enfoque.

---

## Implementación

### Python

Se creó un programa que calcula el factorial usando ambos enfoques (iterativo y recursivo). Permite modificar fácilmente el valor de entrada `n` cambiando una constante en el código.

### C

Se creó un archivo con versiones equivalentes de funciones (iterativa y recursiva). También permite modificar fácilmente el valor de `n`.

---

## Métodos para medir tiempo y memoria

### Python

- **Tiempo**: usando el módulo `time`
- **Memoria**: usando el decorador `@profile` del paquete `memory_profiler`

### C

- **Tiempo**: usando `clock()` del archivo `<time.h>`
- **Memoria**: se utiliza `sizeof()` para estimar el uso de memoria

> ⚠️ **Análisis parcial**:  
Dado que Valgrind no se pudo utilizar por diferentes circunstancias, la memoria en C se estimó usando `sizeof()` y una aproximación por llamada recursiva ("stack frame"). Esta aproximación es **suficiente o parcial** para comparar el rendimiento entre métodos recursivos e iterativos.

---

## Hallazgos y comparaciones

- La versión **iterativa** es más rápida,en el tema de la memoria es similar sin cambios significativos en ambos lenguajes. (esto es mas evidente cuando n>100 en temas de tiempo)
- **Python** es más lento y usa más memoria que **C**, pero permite medir y graficar los resultados fácilmente.
- En el recursivo el código más claro y directo, pero con una sobrecarga en el tiempo.
