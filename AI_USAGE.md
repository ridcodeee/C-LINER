## Herramientas utilizadas

Gemini: Utilizado para la generación de ideas para el proyecto e ideas para implementar funciones en el programa principal 

# Uso de Inteligencia Artificial

### Herramientas Utilizadas
* Gemini Pro

### Prompts Realizados
1. "¿Como se llama el metodo en el lenguaje C, para hacer un valor absoluto de una resta de dos datos tipo float?"
2. "¿Como configuro el archivo task.json en Visual Studio Code para poder compilar un archivo en C?"
3. "¿Cual es la formula de MRU para el calculo de tiempo de colision, y a su vez distancia de encuentro entre dos objetos?"
4. "¿Como funciona el modificador de acceso <const> dentro de un metodo en c++"?
5. "¿Qué clase del framework Qt se utiliza para organizar los elementos de la interfaz, como las cajas de texto y los botones, en una distribución de columna vertical directamente desde el código fuente?"
6. "¿Qué método o instrucción en C++ me permite convertir el texto de tipo QString que el usuario ingresa en las casillas QLineEdit a un valor numérico de tipo float para poder hacer los cálculos algebraicos?"
7. "¿Qué tipo de archivo especial de Qt se debe crear (con extensión .qrc) para incrustar recursos gráficos, como las        imágenes PNG de los autos?"
8. "¿Qué método se aplica al objeto QPixmap al momento de cargar las fotos de los autos para ajustar su tamaño a 50x30 píxeles y asegurar de que la imagen no se deforme ni se aplaste?"
9. "¿Como se hace para declarar los punteros de los elementos de entrada (como inputPos1 o rbKm) como atributos privados en el archivo .h, en lugar de inicializarlos como variables locales dentro de configurarInterfaz()?"
10. "¿Porque no compila el compilador CMake, cuando intento compilar el proyecto?"
11. "¿Como instalo el compilador MinGW para compilar cualquier tipo de proyecto en QT?

### Observaciones
El uso de IA resultó ser un acelerador altamente efectivo para estructurar el código base y resolver problemas técnicos del framework, logrando traducir rápidamente la lógica matemática a una programación funcional. Sin embargo, evidenció limitaciones operativas claras al carecer de acceso al entorno local, lo que le impidió configurar compiladores, directorios o manipular archivos directamente. Es provoco que, la IA operó como un excelente asistente de diseño teórico, pero el proyecto dependió del grupo de trabajo para ensamblar el entorno con la logica del programa, y realizar la validación visual y práctica de la interfaz generada.

### Limitaciones
Durante el desarrollo de este proyecto, la inteligencia artificial (IA) funcionó como una excelente herramienta de diseño lógico y arquitectónico, pero presentó limitaciones prácticas claras, en este caso son:

-Desconexión con el entorno local: La IA carecía de acceso al sistema operativo y al entorno de compilación (Qt Creator). No pudo configurar las herramientas de CMake, solucionar los conflictos con los compiladores (MSVC/MinGW) ni gestionar los archivos del sistema, dependiendo enteramente de la intervención humana y de capturas de pantalla para diagnosticar errores y reubicar las imágenes PNG en las carpetas correctas.

-Ceguera espacial y visual: Aunque la IA fue capaz de calcular las coordenadas matemáticas para ubicar los vehículos en el eje X (como el ajuste en la posición Y a -35), no tenía forma de ver la interfaz generada. No pudo comprobar de forma autónoma si los autos estaban visualmente bien alineados, si la tipografía era legible o si las proporciones de la pantalla se adaptaban correctamente.
