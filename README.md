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
Al cambiar el codigo de C a C++ la estructura cambia ya que se implementa la orientación ambientada a objetos por lo que las funciones que eran declaradas como funciones ahora son metodos de una clase (vehículos), las variables se convirtieron en atributos de un objeto, además ahora para crear un vehículo se tiene que crear dos objetos de la misma clase.

## 5. Diseño de Clases y Responsabilidades
Para este Hito 2, incorporamos un diseño modular basado en la Programación Orientada a Objetos

### Clase "Vehiculo" 
**Responsabilidad:** Representar a cada uno de los móviles de la simulación, almacenando sus atributos físicos y controlando su estado
* **Atributos:** `posicion` (float), `velocidad` (float)
* **Métodos principales:** Vehiculo() -> Método constructor; pedirDatos() -> Método para pedir datos al usuario; calcularEncuentroYMostrar() -> Método que hace el calculo respectivo solicitado, y además muestra los datos previamente calculados.

### Clase `Simulador` o `SistemaFisico` 
* **Responsabilidad:** Coordinar la simulación, procesar las validaciones de entrada, calcular el punto/tiempo exacto de colisión y desplegar los resultados.
* **Relaciones:** La relacion existente entre la clase Vehiculo y objetos creados a partir de ella es de herencia directa, ya que cada objeto tiene los atributos y metodos respectivos de su clase padre, por otra parte la implementacion de cada atributo se hace en la clase principal main(), el cual usando el metodo pedirDatos() esta se instancia así misma, para luego hacer el calculo correspondiente, con otro y el ultimo de sus metodos previamente instanciados.
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

#### Caso 1: Vehiculo de atras alcanza al de adelante.
* **Entrada de ejemplo:**
  ```text
  INGRESE LA POSICION INICIAL DEL VEHICULO: 0
  INGRESE LA VELOCIDAD INICIAL DEL VEHICULO: 80
  INGRESE LOS DATOS DEL SEGUNDO VEHICULO
  INGRESE LA POSICION INICIAL DEL VEHICULO: 100
  INGRESE LA VELOCIDAD INICIAL DEL VEHICULO: 40
  -> La distancia en que se encontraran ambos vehiculos es en: 200 Kilometros
  -> El tiempo en que se encontraran ambos vehiculos es en: 2.5 segundos

#### Caso 2: El segundo vehiculo es mas rapido.
* **Entrada de ejemplo:**
  ```text
  SELECCIONE UNA OPCION (1-4): 1
  INGRESE LA POSICION INICIAL DEL VEHICULO: 0
  INGRESE LA VELOCIDAD INICIAL DEL VEHICULO: 30
  INGRESE LOS DATOS DEL SEGUNDO VEHICULO
  INGRESE LA POSICION INICIAL DEL VEHICULO: 100
  INGRESE LA VELOCIDAD INICIAL DEL VEHICULO: 50
  ->Ambos vehiculos nunca se encontraran
  
#### Caso 3: Misma velocidad, posiciones distintas.
* **Entrada de ejemplo:**
  ```text
  INGRESE LA POSICION INICIAL DEL VEHICULO: 0
  INGRESE LA VELOCIDAD INICIAL DEL VEHICULO: 40
  ->INGRESE LOS DATOS DEL SEGUNDO VEHICULO
  INGRESE LA POSICION INICIAL DEL VEHICULO: 100
  INGRESE LA VELOCIDAD INICIAL DEL VEHICULO: 40
  ->Ambos vehiculos nunca se encontraran
  
#### Caso 4: Encuentro con pósición inicial negativa.
* **Entrada de ejemplo:**
  ```text
  INGRESE LA POSICION INICIAL DEL VEHICULO: -50
  INGRESE LA VELOCIDAD INICIAL DEL VEHICULO: 100
  ->INGRESE LOS DATOS DEL SEGUNDO VEHICULO
  INGRESE LA POSICION INICIAL DEL VEHICULO: 50
  INGRESE LA VELOCIDAD INICIAL DEL VEHICULO: 20
  -> La distancia en que se encontraran ambos vehiculos es en: 75 metros
  -> El tiempo en que se encontraran ambos vehiculos es en: 1.25 segundos


