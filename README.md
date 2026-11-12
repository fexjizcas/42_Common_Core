# 42 Cursus - Software Engineering Portfolio

Este repositorio actúa como el índice central de mi progreso a través del programa de 42. El currículo destaca por su metodología basada íntegramente en el aprendizaje por proyectos (Project-Based Learning), la evaluación entre pares (Peer-to-Peer) y la resolución autónoma de problemas técnicos complejos.

>⚠️ **Nota importante:** Work In Progress: Este repositorio es un proyecto vivo y no definitivo. Su estructura y contenido irán cambiando, evolucionando y ampliándose a medida que se avanza en los distintos Milestones del programa.

## Arquitectura del Repositorio

El directorio está estructurado de manera modular, dividiendo los entregables por niveles de dificultad (*Milestones*) y bibliotecas de uso general.

| Directorio | Nivel | Estado | Descripción | Lenguaje | 
| ----- | ----- | ----- | ----- | ----- | 
| [**`📁 Libft/`**](./Libft) | `M0` | ✅ Terminado | Desarrollo desde cero de una biblioteca estática. Recrea funciones de la `libc` y establece bases de memoria y punteros. | C | 
| [**`📁 M1/`**](./M1) | `M1` | ✅ Terminado | Proyectos orientados a la optimización, algoritmos y gráficos. *(Incluye submódulos gestionados vía `.gitmodules`)*. | C | 
| [**`📁 M2/`**](./M2) | `M2` | 🔄 En curso | Introducción a nuevos paradigmas y POO. Actualmente contiene los avances de `Python_Module_00` y `Python_Module_01`. | Python | 
| [**`📁 Super_libft/`**](./Super_libft) | `Core` | Evolutivo | Biblioteca personal expandida. Integra componentes superados para maximizar la modularidad en futuras entregas. | C | 

## Metodología y Normativa

Todos los proyectos desarrollados en C dentro de este repositorio están estrictamente sujetos a la **Norminette** y estándar de código oficial de 42. Esto implica un cumplimiento riguroso de convenciones que garantizan un código extremadamente limpio y mantenible, incluyendo:

*   Ausencia absoluta de fugas de memoria (Memory Leaks).
*   Funciones con un máximo de 25 líneas.
*   Prohibición de bucles `for`, sentencias `switch` y uso de variables globales.
*   Gestión controlada de dependencias y macros.

## Notas de Compilación y Documentación

Para mantener la raíz del repositorio estructurada, la información técnica específica se incluye en el interior de cada proyecto:

*   **Documentación Individual:** Cada subdirectorio contiene su propio archivo `README.md` con las especificaciones del reto, el enfoque de resolución y notas de la evaluación.
*   **Compilación:** Todo proyecto en C incluye su respectivo `Makefile` estandarizado. Proporciona siempre las reglas base (`make`, `clean`, `fclean`, `re`) para una compilación segura.
*   **Gestión de Dependencias Grupales:** Algunos proyectos de 42 se desarrollan en equipo. Para mantener el historial de *commits* original y el trabajo individual, estos se enlazan en este repositorio general mediante submódulos de Git (visibles en el archivo `.gitmodules`).