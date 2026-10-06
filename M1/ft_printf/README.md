*Este proyecto ha sido creado como parte del currículo de 42 por fejimene.*

## Descripción
`ft_printf` es un proyecto en el que se recrea la función `printf` de la biblioteca estándar de C (`libc`). El objetivo principal es comprender el funcionamiento interno de las funciones con argumentos variables y cómo C gestiona los diferentes tipos de datos a nivel de memoria.

El proyecto implementa un sistema de formateo capaz de procesar múltiples tipos de variables, imprimirlas correctamente y devolver la longitud total de la cadena generada. Se da soporte a los siguientes especificadores:
*   **Texto:** `%c` (caracteres) y `%s` (cadenas de texto).
*   **Punteros:** `%p` (direcciones de memoria en formato hexadecimal).
*   **Enteros base 10:** `%d` e `%i` (con signo), y `%u` (sin signo).
*   **Enteros base 16:** `%x` (minúsculas) y `%X` (mayúsculas).
*   **Símbolos:** `%%` (para imprimir el propio símbolo de porcentaje).

## Instrucciones
El proyecto genera una biblioteca estática (`libftprintf.a`) lista para ser integrada en cualquier otro proyecto de C.

**Compilación:**
Para compilar la biblioteca, clona este repositorio, abre la terminal en la carpeta raíz y ejecuta:
```bash
make
```
El `Makefile` incluye las siguientes reglas adicionales:
*   `make clean`: Elimina los archivos objeto temporales (`.o`).
*   `make fclean`: Ejecuta `clean` y además elimina el archivo `libftprintf.a` compilado.
*   `make re`: Limpia el entorno y recompila el proyecto desde cero.

**Integración en tu código:**
Para utilizar la función, simplemente incluye el archivo de cabecera en tus ficheros `.c`:
```c
#include "ft_printf.h"
```

## Recursos

**Documentación de referencia:**
*   **Manual de C (`man 3 printf`):** Referencia principal para observar el comportamiento original de la función, especialmente en el tratamiento de casos límite (como punteros nulos o límites de enteros) y los valores de retorno esperados.
*   **Librería `<stdarg.h>`:** Lectura indispensable para entender el funcionamiento de las macros `va_list`, `va_start`, `va_arg` y `va_end`, necesarias para recorrer los argumentos variables.

**Uso de Inteligencia Artificial (IA):**
Durante el desarrollo de este proyecto, se ha utilizado IA como tutor técnico y asistente de código para las siguientes tareas:
*   **Debugging y gestión de memoria:** Análisis de comportamientos inesperados para identificar el origen de errores como *Segmentation Faults* o lecturas inválidas al enfrentarse a casos especiales.