*Este proyecto ha sido creado como parte del currículo de 42 por fejimene.*

# get_next_line

## Descripción
El proyecto **get_next_line** tiene como objetivo programar una función en C que devuelva una línea leída de un file descriptor (FD). Esta herramienta permite extraer texto de archivos o de la entrada estándar línea por línea, de forma continuada y segura. Este proyecto introduce conceptos en C, como la retención de estado mediante variables estáticas, la gestión dinámica de memoria (usando `malloc` y `free`), y la interacción con llamadas al sistema para operaciones de entrada/salida.

## Instrucciones
El proyecto está diseñado para ser compilado junto con tu propio programa. El tamaño de lectura se define en el momento de la compilación utilizando la flag `-D BUFFER_SIZE=n`.

**Compilación de la parte obligatoria:**
`cc -Wall -Wextra -Werror -D BUFFER_SIZE=42 get_next_line.c get_next_line_utils.c main.c`

**Compilación de la parte bonus (soporte para múltiples FD simultáneos):**
`cc -Wall -Wextra -Werror -D BUFFER_SIZE=42 get_next_line_bonus.c get_next_line_utils_bonus.c main.c`

**Ejecución:**
Una vez compilado, puedes probarlo redirigiendo un archivo de texto como entrada estándar o pasándole el archivo directamente en tu `main`:
`./a.out < mi_archivo_de_prueba.txt`

## Explicación y Justificación del Algoritmo
El algoritmo implementado para `get_next_line` se basa en un proceso de **acumulación, extracción y preservación**, gestionado a través de una variable estática (o un array de variables estáticas en la versión bonus).

1. **Acumulación (Lectura):** La función utiliza un bucle que solicita datos al sistema operativo usando `read()` en bloques del tamaño exacto de `BUFFER_SIZE`. Estos bloques de memoria temporal se concatenan inmediatamente al final de la variable estática principal. El bucle se detiene únicamente bajo dos condiciones: si se encuentra el carácter de salto de línea (`\n`) en el texto acumulado, o si la lectura devuelve `0` (indicando el final del archivo).
2. **Extracción:** Una vez interrumpido el bucle, el algoritmo mide la longitud de la cadena desde el inicio hasta el primer `\n` incluido. Se reserva la memoria exacta para esta sección y se copia, creando la cadena definitiva que se devolverá al usuario.
3. **Preservación (Limpieza):** Como `read()` lee por bloques ciegos, es altamente probable haber capturado caracteres que pertenecen a la *siguiente* línea. El algoritmo recorta la línea recién extraída de la variable estática y preserva el texto sobrante, garantizando que el punto de partida de la siguiente llamada a la función sea exactamente el carácter posterior al último `\n` entregado.

**Justificación técnica:** 
Se optó por este diseño secuencial porque minimiza las llamadas al sistema (las cuales son costosas en tiempo de ejecución), permitiendo lecturas grandes y eficientes en memoria. La variable estática es el único mecanismo viable en C puro para que una función "recuerde" datos locales entre múltiples llamadas sin obligar al usuario a gestionar estructuras externas. Finalmente, estructurar el código en tres fases claras (leer, extraer, limpiar) facilita enormemente el aislamiento de *leaks* de memoria.

## Recursos
**Documentación técnica:**
- `man 2 read`
- `man 3 malloc`
- `man 3 free`

**Uso de Inteligencia Artificial (IA):**
Se empleó un asistente de IA durante el desarrollo de este proyecto asumiendo un rol de tutor técnico y asistente de código para las siguientes tareas:
- Rastreo y diagnóstico lógico de *Segmentation faults* y fugas de memoria (*Memory leaks*).
- Comprensión del funcionamiento interno de las llamadas al sistema (como read) y el manejo de buffers estáticos.