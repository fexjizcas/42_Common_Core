<div align="center">
  <picture>
    <source media="(prefers-color-scheme: dark)" srcset="../../assets/imagenes/42_white.png">
    <source media="(prefers-color-scheme: light)" srcset="https://upload.wikimedia.org/wikipedia/commons/8/8d/42_Logo.svg">
    <img alt="42 Logo" src="https://upload.wikimedia.org/wikipedia/commons/8/8d/42_Logo.svg" width="80">
  </picture>
</div>

# Python Module 01 - Programación Orientada a Objetos

*Este proyecto ha sido creado como parte del currículo de 42 por fejimene.*

Este módulo introduce y desarrolla los pilares de la Programación Orientada a Objetos (POO) en Python. A través de una evolución progresiva centrada en el modelado de un jardín, se parte de scripts básicos hasta construir arquitecturas orientadas a objetos con encapsulamiento, validación de estado, herencia simple y multinivel, clases anidadas, métodos estáticos y métodos de clase.

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
      <td align="left"><code>ft_garden_intro.py</code></td>
      <td align="left">Punto de entrada y salida formateada</td>
      <td align="left">Estructura base de ejecución mediante <code>if __name__ == "__main__":</code>, declaración de variables y formateo de texto con <em>f-strings</em>.</td>
    </tr>
    <tr>
      <td align="center" valign="middle"><kbd>01</kbd></td>
      <td align="left"><code>ft_garden_data.py</code></td>
      <td align="left">Clases, <code>__init__</code> y atributos</td>
      <td align="left">Definición de la clase <code>Plant</code>, inicialización de atributos mediante el método constructor e instanciación de múltiples objetos.</td>
    </tr>
    <tr>
      <td align="center" valign="middle"><kbd>02</kbd></td>
      <td align="left"><code>ft_plant_growth.py</code></td>
      <td align="left">Métodos de instancia y estado</td>
      <td align="left">Implementación de métodos (<code>grow</code>, <code>age</code>, <code>show</code>) que mutan y consultan el estado interno de cada objeto durante una simulación temporal.</td>
    </tr>
    <tr>
      <td align="center" valign="middle"><kbd>03</kbd></td>
      <td align="left"><code>ft_plant_factory.py</code></td>
      <td align="left">Instanciación en lote y reutilización</td>
      <td align="left">Creación sistemática de distintas instancias de <code>Plant</code> con parámetros personalizados reutilizando la estructura de clase.</td>
    </tr>
    <tr>
      <td align="center" valign="middle"><kbd>04</kbd></td>
      <td align="left"><code>ft_garden_security.py</code></td>
      <td align="left">Encapsulamiento, <em>getters</em> y <em>setters</em></td>
      <td align="left">Protección de atributos internos (<code>_height</code>, <code>_days</code>) y validación de datos en los métodos de modificación para rechazar valores negativos.</td>
    </tr>
    <tr>
      <td align="center" valign="middle"><kbd>05</kbd></td>
      <td align="left"><code>ft_plant_types.py</code></td>
      <td align="left">Herencia, <code>super()</code> y <em>overriding</em></td>
      <td align="left">Especialización mediante subclases (<code>Flower</code>, <code>Tree</code>, <code>Vegetable</code>), extensión de constructores y sobreescritura de métodos de la clase base.</td>
    </tr>
    <tr>
      <td align="center" valign="middle"><kbd>06</kbd></td>
      <td align="left"><code>ft_garden_analytics.py</code></td>
      <td align="left">Clases anidadas, <code>@staticmethod</code> y <code>@classmethod</code></td>
      <td align="left">Herencia multinivel (<code>Seed</code>), clases internas de métricas (<code>Plant.Stats</code>), utilidades estáticas y constructores alternativos (<code>create_anonymous</code>).</td>
    </tr>
  </tbody>
</table>

## Estándares y Requisitos Técnicos

El código de este módulo sigue las convenciones de estilo y calidad exigidas en el currículo de Python de 42:

* **Tipado estático (Type Hints):** Todas las funciones y métodos declaran explícitamente los tipos de sus parámetros y valores de retorno (`str`, `int`, `float`, `bool`, `None` y referencias a clases).
* **Normativa de estilo:** Código formateado conforme al estándar **PEP 8** y validado sin advertencias mediante `flake8`.
* **Puntos de entrada aislados:** Cada archivo incorpora el bloque `if __name__ == "__main__":` para permitir tanto su ejecución directa como la importación limpia de sus clases en otros módulos.

## Ejecución

Cada ejercicio es autocontenido y puede ejecutarse de forma independiente con Python 3:

```bash
python3 ft_garden_intro.py
python3 ft_garden_data.py
python3 ft_plant_growth.py
python3 ft_plant_factory.py
python3 ft_garden_security.py
python3 ft_plant_types.py
python3 ft_garden_analytics.py
```

## Autor

- [Félix Jiménez](https://github.com/fexjizcas)