Comparacion de funciones recursivas e iterativas para el calculo del factorial

--Proposito de la tarea
El objetivo es comparar la eficiencia entre funciones recursivas e iterativas para calcular el factorial en dos lenguajes de programacion: Python y C. Se mide el tiempo de ejecucion y el uso de memoria para analizar el rendimiento en cada enfoque.


--Implementacion
-Python: se creo un programa que calcula el factorial usando ambos enfoques.

-C: se creo un archivo con las mismas versiones de funciones.

Todos los archivos permiten modificar facilmente el valor de entrada n cambiando una constante en el codigo.


--Metodos para medir tiempo y memoria:

Python:

*Tiempo usando el modulo time

*Memoria: usando el decorador @profile del paquete memory_profiler

C:

*Tiempo: con clock() del archivo <time.h>

*Memoria: se utiliza sizeof para estimar la memoria y valgrind (usado en WSL) para un analisis detallado


--Hallazgos y comparaciones
La version iterativa es mas rapida y consume menos memoria que la recursiva en ambos lenguajes.

Python es mas lento y usa mas memoria que C, pero permite medir y graficar los resultados mas facilmente.

