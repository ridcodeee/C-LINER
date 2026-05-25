# C-LINER
# Problemática

Generalmente los estudiantes tienen dificultad para aprender conceptos de la física mecánica, como lo es el MRU. Por ende, es necesario una guía más visual para el entendimiento de esta rama, y como interactúan y se relacionan las variables físicas dentro del fenómeno, en un escenario más práctico.

# Objetivos

### 1-.General:  
Implementar un software de simulación en lenguaje C capaz de procesar y resolver ecuaciones de Movimiento Rectilíneo Uniforme (MRU), programa en C que calcule de manera precisa el tiempo y distancia de colisión de 2 vehículos
validando la entrada de datos del usuario y entregando resultados precisos que sirvan como guía visual para el estudio de la física mecánica.

### Específicos:
* Desarrollar un programa en C que solucione problemas de MRU y entregue un resultado certero del tiempo y distancia en donde colisionan.
* Implementar un sistema de de validación de entrada de datos el cual asegure que los datos ingresados sean validos.
* Diseñar un interfaz de salida de resultados por consola de manera clara para el usuario presentando los datos obtenidos.

## Roles del Equipo
* **Integrante 1:** Antonella Bertolone (katary071n) - Desarrollador de lógica y gestión de repositorio.
* **Integrante 2:** Alejandro Diaz (ricodee) - Desarrollador de lógica física (Backend). 
* **Integrante 3:** Javier da Cruz (f0rtv13r) - Encargado de pruebas, control de calidad y casos borde.
* **Integrante 4:** Leonardo Gutierrez (Goh-y777) - Gestor de proyecto y documentación

## Funcionalidades Implementadas
* Distancia en que se encuentran ambos vehículos (Colision)
* Tiempo que se encuentran ambos vehículos 

## Pruebas Realizadas
* Test de datos válidos (números enteros y decimales).
* Verificación de resultados con calculadora física.

## Avances y próximos pasos
**Avance:** Estructura básica terminada.

**Próximo paso:**
* Implementar el archivo AI_USAGE.md y el Milestone del Hito 2.

## Justificación de Cambios y Anexos
* No hay cambios respecto al plan original.

## 4. Migración de C a C++ y Cambios Estructurales
(Aquí deben explicar a nivel general cómo transformaron el código estructurado en funciones de C a un modelo de objetos en C++)

## 5. Diseño de Clases y Responsabilidades
Para este Hito 2, incorporamos un diseño modular basado en la Programación Orientada a Objetos

### Clase "Vehiculo" 
**Responsabilidad:** Representar a cada uno de los móviles de la simulación, almacenando sus atributos físicos y controlando su estado
* **Atributos:** `posicionInicial` (double), `velocidad` (double), `nombre` (std::string)
* [cite_start]**Métodos principales:** Constructores, getters/setters, y métodos para calcular la posición en un tiempo 

### Clase `Simulador` o `SistemaFisico` 
* **Responsabilidad:** Coordinar la simulación, procesar las validaciones de entrada, calcular el punto/tiempo exacto de colisión y desplegar los resultados.
* **Relaciones:** Tiene una relación de **Composición** con la clase `Vehiculo` (el Simulador contiene dos instancias de `Vehiculo`)

**[COMPLETAR: Ajusten los nombres de las clases a las que realmente crearon en su carpeta `src/`, detallando qué hace cada una y cómo se relacionan (herencia/composición)]**

---

## 6. Funcionalidades Implementadas y Casos de Prueba
El software cuenta con las siguientes capacidades funcionales

...

1. Cálculo de la distancia exacta en que se encuentran ambos vehículos (Colisión)

...

3. Cálculo del tiempo en que se encuentran ambos vehículos

...

5. Sistema de validación robusto para evitar velocidades o posiciones lógicas imposibles (entradas no numéricas, etc.)


...

### Ejemplos de Ejecución (Casos de Prueba)
> (Para asegurar los 25 puntos del README, incluyan ejemplos con texto real de la consola)

#### Caso 1: Colisión Estándar (Vehículos en sentidos opuestos)
* **Entrada de ejemplo:**
  ```text
  Vehículo 1 -> Posición: 0 m, Velocidad: 20 m/s
  Vehículo 2 -> Posición: 100 m, Velocidad: -30 m/s

