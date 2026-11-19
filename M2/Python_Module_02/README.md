<div align="center">
  <picture>
    <source media="(prefers-color-scheme: dark)" srcset="../../assets/imagenes/42_white.png">
    <source media="(prefers-color-scheme: light)" srcset="https://upload.wikimedia.org/wikipedia/commons/8/8d/42_Logo.svg">
    <img alt="42 Logo" src="https://upload.wikimedia.org/wikipedia/commons/8/8d/42_Logo.svg" width="80">
  </picture>
</div>

# Python Module 02 - Manejo de Excepciones

*Este proyecto ha sido creado como parte del currículo de 42 por fejimene.*

Este módulo profundiza en la programación defensiva y el control de errores en Python. A través de una serie de ejercicios progresivos ambientados en la gestión y monitorización de un jardín automatizado, se implementan mecanismos para capturar fallos en tiempo de ejecución, validar datos de entrada, diseñar jerarquías de excepciones propias y garantizar la liberación segura de recursos sin que el programa se detenga de forma abrupta.

## Estructura de los Ejercicios

<table>
  <thead>
    <tr>
      <th align="center">Orden</th>
      <th align="left">Archivo</th>
      <th align="left">Conceptos Clave</th>
      <th align="left">Descripción Técnica</th>
    </tr>
  </thead>
  <tbody>
    <tr>
      <td align="center" valign="middle"><kbd>00</kbd></td>
      <td align="left"><code>ft_first_exception.py</code></td>
      <td align="left">Bloques <code>try</code> / <code>except</code></td>
      <td align="left">Conversión segura de cadenas a enteros y captura básica de excepciones para evitar interrupciones ante entradas no numéricas.</td>
    </tr>
    <tr>
      <td align="center" valign="middle"><kbd>01</kbd></td>
      <td align="left"><code>ft_raise_exception.py</code></td>
      <td align="left">Sentencia <code>raise</code>, <code>ValueError</code></td>
      <td align="left">Validación de rangos térmicos (0 °C a 40 °C) y lanzamiento manual de excepciones descriptivas cuando los valores superan los límites permitidos.</td>
    </tr>
    <tr>
      <td align="center" valign="middle"><kbd>02</kbd></td>
      <td align="left"><code>ft_different_errors.py</code></td>
      <td align="left">Excepciones nativas múltiples</td>
      <td align="left">Identificación y captura diferenciada de errores estándar en Python: <code>ValueError</code>, <code>ZeroDivisionError</code>, <code>FileNotFoundError</code> y <code>TypeError</code>.</td>
    </tr>
    <tr>
      <td align="center" valign="middle"><kbd>03</kbd></td>
      <td align="left"><code>ft_custom_errors.py</code></td>
      <td align="left">Herencia de <code>Exception</code></td>
      <td align="left">Creación de una jerarquía de errores personalizados (<code>GardenError</code> como clase base y las subclases <code>PlantError</code> y <code>WaterError</code>).</td>
    </tr>
    <tr>
      <td align="center" valign="middle"><kbd>04</kbd></td>
      <td align="left"><code>ft_finally_block.py</code></td>
      <td align="left">Cláusula <code>finally</code></td>
      <td align="left">Gestión del ciclo de vida del sistema de riego, asegurando el cierre y limpieza de recursos tanto si el proceso finaliza con éxito como si ocurre un error.</td>
    </tr>
  </tbody>
</table>

## Estándares y Requisitos Técnicos

El código de este módulo sigue las convenciones de estilo y calidad exigidas en el currículo de Python de 42:

* **Tipado estático (Type Hints):** Todas las funciones declaran explícitamente los tipos de sus parámetros y valores de retorno (`str`, `int`, `list`, `None`).
* **Normativa de estilo:** Código formateado conforme al estándar **PEP 8** y validado sin advertencias mediante `flake8`.
* **Puntos de entrada aislados:** Cada script incorpora el bloque `if __name__ == "__main__":` para permitir tanto su ejecución directa como su importación modular sin efectos secundarios.

## Ejecución

Cada ejercicio es autocontenido y puede ejecutarse de forma independiente con Python 3:

```bash
python3 ft_first_exception.py
python3 ft_raise_exception.py
python3 ft_different_errors.py
python3 ft_custom_errors.py
python3 ft_finally_block.py
```

## Autor

- [Félix Jiménez](https://github.com/fexjizcas)