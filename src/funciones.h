#include<stdio.h>
#include<math.h>
// Librerias utilizadas

#define MAX_VEHICULOS 2 // Declarar la cantidad maxima de vehiculos dentro del sistema

struct Vehiculo{ // Declarar la estructura Vehiculos
    float pos; // Atributos
    float vel;
};
// Declaracion de funciones utilizadas
float calcularTiempo(struct Vehiculo vehiculos[]);
float calcularDistancia(struct Vehiculo vehiculos[], float tiempo);
void pedirDatos(struct Vehiculo vehiculos[]);
