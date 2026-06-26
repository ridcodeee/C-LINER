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

  **Nota sobre composición del equipo:**
  Informamos que el estudiante Leonardo Gutierrez, inicialmente asignado como gestor de proyecto y documentación, se retiró del equipo y de la institución por motivos personales antes de que se haya finalizado el proyecto. Las tareas correspondientes a su rol fueron redistribuidas y asumidas por los integrantes restantes.

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


1. Cálculo de la distancia exacta en que se encuentran ambos vehículos (Colisión)


2. Cálculo del tiempo en que se encuentran ambos vehículos


3. Sistema de validación robusto para evitar velocidades o posiciones lógicas imposibles (entradas no numéricas, etc.)


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

## 4. Evolución del Proyecto (Hito 3)
**Hito 3** Incorporación de una capa visual interactiva utilizando el Framework
Se removio por completo la interaccion por terminal, se implementó el patron de diseño de separación lógica-interfaz mediante eventos asínconos (Signals y Slots) y se añadieron controles dinámicos para la configurar la simulación sin modificar el código fuente

## 5. Diseño de la capa de interfaz y responsabilidades
El software cuenta con un diseño de software desacoplado donde la presentacion se maneja de manera independiente de la física cinematica:

### Clase `MainWindow`(`mainwindow.hpp` / `mainwindow.cpp`)
**rol** Capa de interfaz de usuario desarrollada en Qt Widgets, Renderiza la ventana principal, recolecta las entradas numéricas de los controles gráficos, realiza la conversión de datos y actualiza las etiquetas de texto del reporte visual al capturar los eventos del sistema

## 6. Interfaz Desarrollada y Parametrización
### Objetivo de la Interfaz
Eliminar la necesidad de interactuar mediante la consola de comandos, proveyendo un espacio visual interactivo donde cualquier estudiante pueda alterar libremente los datos iniciales de los móviles y visualizar los resultados numéricos instantáneamente mediante clics

### Componentes y Widgets Principales
**`QDoubleSpinBox`**: Utilizados para el ingreso y parametrización de las posiciones iniciales (m) y las velocidades (m/s) de ambos vehículos, restringiendo por software la entrada de caracteres alfabéticos o símbolos inválidos.
**`QPushButton`**: Botones interactivos encargados de disparar el cálculo cinemático de colisión (`"Calcular Encuentro"`) y restablecer el simulador a su estado neutro (`"Reiniciar"`).
**`QLabel`**: Secciones destinadas a la salida dinámica de texto donde se imprimen el tiempo final, la posición de impacto o los mensajes informativos de alerta si la colisión es físicamente imposible.

## 7. Separación entre Lógica e Interfaz (Signals & Slots)
Para dar cumplimiento estricto a las pautas de diseño modular y evitar que la interfaz concentre la lógica del proyecto, la física cinemática está **completamente desacoplada** de Qt:
* Las clases `Vehiculo` y `SistemaFisico` se compilan de manera pura en C++ estándar y no contienen directivas de inclusión gráfica (`#include <QWidget>`), garantizando que la física funcione con total independencia del entorno gráfico.
* Cuando el usuario presiona el botón en la interfaz, `MainWindow` captura los valores numéricos mediante sus **Slots** nativos, instancia los objetos de la clase `Vehiculo` y delega la operación matemática a `SistemaFisico`. Los resultados numéricos se retornan a la vista para ser mostrados en las etiquetas de salida (`QLabel`), logrando un flujo limpio, estructurado y asíncrono.

## 8. Casos de Prueba (Escenarios de Uso en GUI)
Mapeo de la ejecución de pruebas utilizando la interfaz gráfica para validar los resultados esperados:

| ID Prueba | Entrada Vehículo 1 | Entrada Vehículo 2 | Comportamiento Esperado | Resultado en Interfaz |
| :--- | :--- | :--- | :--- | :--- |
| **TC-01** | Pos: 0 m, Vel: 80 m/s | Pos: 100 m, Vel: 40 m/s | El de atrás alcanza al de adelante. | Tiempo: 2.5 s, Distancia: 200 m. |
| **TC-02** | Pos: 0 m, Vel: 30 m/s | Pos: 100 m, Vel: 50 m/s | El segundo vehículo es más rápido y se aleja. | Mensaje: "Ambos vehículos nunca se encontrarán". |
| **TC-03** | Pos: 0 m, Vel: 40 m/s | Pos: 100 m, Vel: 40 m/s | Velocidades idénticas en desfase espacial. | Mensaje: "Ambos vehículos nunca se encontrarán". |
| **TC-04** | Pos: -50 m, Vel: 100 m/s| Pos: 60 m, Vel: -10 m/s | Dirección opuesta / Posición negativa. | Tiempo: 1.0 s, Distancia: 50 m. |

## 9. Instrucciones de Compilación y Ejecución
### Requisitos Previos
* Compilador de C++ con soporte para C++17 o superior (GCC/MinGW, MSVC).
* Framework **Qt 6.x** instalado con el módulo Qt Widgets.
* Herramienta de automatización **CMake** (versión 3.16 o superior) o el entorno de desarrollo integrado **Qt Creator**.
* MinGW 64 bits

### Casos de Prueba 
Para copilar se uso la herramienta MinGW 64 bits

Caso #1
<img width="989" height="613" alt="image" src="https://github.com/user-attachments/assets/954ad81a-8159-401d-8526-5e193b6720ee" />

Caso #2
<img width="987" height="611" alt="image" src="https://github.com/user-attachments/assets/af509774-3630-42a6-86ff-ae20fd31ecb6" />


Caso #3
<img width="985" height="613" alt="image" src="https://github.com/user-attachments/assets/ba9b5ed4-a9ba-4f28-a113-a841d3ac2c29" />

Caso #4
<img width="987" height="622" alt="image" src="https://github.com/user-attachments/assets/019e86fc-9484-4532-9b44-badd385f6a0c" />






