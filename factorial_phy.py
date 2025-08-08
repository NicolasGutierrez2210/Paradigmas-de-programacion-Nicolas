!pip install -q memory-profiler

import time
import matplotlib.pyplot as plt
from memory_profiler import memory_usage

# Definimos funciones
def facto_r(n):
    if n == 0 or n == 1:
        return 1
    else:
        return n * facto_r(n - 1)

def facto_i(n):
    resultado = 1
    for i in range(2, n + 1): # El 2 puede variar
        resultado *= i
    return resultado

# Medir memoria y tiempo para un solo valor n
n = 600 #puede ir cambiando depende la necesidad
start_time = time.time()
facto_r(n)
end_time = time.time()
print(f"Tiempo de ejecución (recursivo) para {n}!: {end_time - start_time:.10f} segundos")

start_time = time.time()
facto_i(n)
end_time = time.time()
print(f"Tiempo de ejecución (iterativo) para {n}!: {end_time - start_time:.10f} segundos")

memoria_r = memory_usage((facto_r, (n,)))
memoria_i = memory_usage((facto_i, (n,)))
print(f"Uso de memoria (recursivo): {max(memoria_r):.2f} MiB")
print(f"Uso de memoria (iterativo): {max(memoria_i):.2f} MiB")

# Evaluamos en un rango de valores
n_values = list(range(1, 150))
tiempos_r = []
tiempos_i = []
memorias_r = []
memorias_i = []

for val in n_values:

    # tiempo
    start = time.time()
    facto_r(val)
    tiempos_r.append(time.time() - start)

    start = time.time()
    facto_i(val)
    tiempos_i.append(time.time() - start)


    # memoria
    mem_r = memory_usage((facto_r, (val,)), max_usage=True, interval=0.01)
    mem_i = memory_usage((facto_i, (val,)), max_usage=True, interval=0.01)
    memorias_r.append(mem_r)
    memorias_i.append(mem_i)

# Graficar tiempo
plt.figure(figsize=(10, 5))
plt.plot(n_values, tiempos_r, label="Recursivo")
plt.plot(n_values, tiempos_i, label="Iterativo")
plt.xlabel("Valor de n")
plt.ylabel("Tiempo (s)")
plt.title("Comparación de tiempo de ejecución")
plt.legend()
plt.grid(True)
plt.show()



# Graficar memoria
plt.figure(figsize=(10, 5))
plt.plot(n_values, memorias_r, label="Recursivo")
plt.plot(n_values, memorias_i, label="Iterativo")
plt.xlabel("Valor de n")
plt.ylabel("Uso de memoria (MiB)")
plt.title("Comparación de uso de memoria")
plt.legend()
plt.grid(True)
plt.show()
