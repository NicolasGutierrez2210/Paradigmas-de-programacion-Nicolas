📊 Comparación de funciones recursivas e iterativas para el cálculo del factorial
🧾 Propósito de la tarea
El objetivo es comparar la eficiencia entre funciones recursivas e iterativas para calcular el factorial en dos lenguajes de programación: Python y C. Se mide el tiempo de ejecución y el uso de memoria para analizar el rendimiento en cada enfoque.

⚙️ Implementación
Python: Se creó un programa que calcula el factorial usando ambos enfoques (iterativo y recursivo).

C: Se creó un archivo con las mismas versiones de funciones.

Todos los archivos permiten modificar fácilmente el valor de entrada n cambiando una constante en el código.

⏱️ Métodos para medir tiempo y memoria
🐍 Python
Tiempo: usando el módulo time.

Memoria: usando el decorador @profile del paquete memory_profiler.

💻 C
Tiempo: con clock() del archivo <time.h>.

Memoria: se utiliza sizeof() para estimar la memoria.

🔍 Análisis parcial
Dado que Valgrind no se pudo utilizar, la memoria en C se estimó usando sizeof() y una aproximación por llamada recursiva ("stack frame"). Esta aproximación es suficiente o parcial para comparar el rendimiento entre métodos recursivos e iterativos.

📈 Hallazgos y comparaciones
La versión iterativa es más rápida y consume menos memoria que la recursiva en ambos lenguajes.

Python es más lento y usa más memoria que C, pero permite medir y graficar los resultados fácilmente.

