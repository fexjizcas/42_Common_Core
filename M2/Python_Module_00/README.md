# Python Module 00

*Este proyecto ha sido creado como parte del currículo de 42 por fejimene.*

> **Nota importante:** Este proyecto no es un programa completo. Es una colección de funciones independientes diseñadas para aprender la sintaxis básica de Python aplicando la lógica a la gestión de los datos de un huerto comunitario.

## ¿Qué es Growing Code?

Al empezar a programar en Python, es fundamental dominar cómo interactúa el código con el usuario y cómo se manipulan los datos básicos antes de crear grandes aplicaciones.

Cada ejercicio resuelve un problema específico del huerto y obliga a utilizar una herramienta nueva del lenguaje.

### Conceptos integrados:
- **Entrada y salida:** Uso de `print()` e `input()` para interactuar con el usuario.
- **Conversión de tipos:** Transformación de cadenas de texto (*strings*) a enteros para realizar cálculos matemáticos.
- **Control de flujo:** Uso de bloques condicionales (`if`/`elif`/`else`) para tomar decisiones basadas en datos.
- **Iteración y recursividad:** Creación de bucles (con `for` y `range()`) y funciones que se llaman a sí mismas para resolver problemas repetitivos.
- **Tipado estricto:** Implementación de anotaciones de tipo (*Type Hints*) validadas mediante el corrector `mypy`.

---

## Cómo testear y probar los ejercicios

Este proyecto sigue una norma estricta: los archivos solo pueden contener la función solicitada. No se permite usar bloques `if __name__ == "__main__":` ni hacer llamadas globales.

### 1. Estructura de carpetas recomendada
Para evaluar los ejercicios, asegúrate de tener el archivo de testeo `main.py` junto a los scripts que quieras probar:
```text
mi_proyecto/
├── main.py
├── ft_hello_garden.py
├── ft_plot_area.py
└── (resto de archivos .py)
```

### 2. Ejecución de las pruebas
Dado que los archivos no se pueden ejecutar por sí solos de manera convencional, utiliza el script auxiliar `main.py` para probarlos. Desde tu terminal, ejecuta:

```bash
python3 main.py
```
El menú interactivo importará automáticamente tus funciones y te permitirá probar las entradas y salidas de cada ejercicio.

---

## Lista de Ejercicios de Growing Code

Si quieres revisar qué hace cada script de manera independiente, aquí tienes la tabla con todas las funciones implementadas:

| Ejercicio | Archivo | Descripción |
| :--- | :--- | :--- |
| `ex00` | `ft_hello_garden.py` | Imprime un saludo estático básico. |
| `ex01` | `ft_garden_name.py` | Pide el nombre del huerto y formatea la salida. |
| `ex02` | `ft_plot_area.py` | Convierte texto a enteros y calcula el área de una parcela. |
| `ex03` | `ft_harvest_total.py` | Recibe y suma múltiples variables numéricas. |
| `ex04` | `ft_plant_age.py` | Evalúa si una planta es cosechable usando lógica condicional. |
| `ex05` | `ft_water_reminder.py` | Sistema de alertas basado en días transcurridos. |
| `ex06` | `ft_count_harvest_*.py` | Cuenta atrás usando iteración (`for`) y recursividad. |
| `ex07` | `ft_seed_inventory.py` | Función avanzada con *Type Annotations* y métodos de string. |

---
*Proyecto creado para aprender los fundamentos de Python.*