#include<stdio.h>
#include<math.h>
#include"funciones.h"
// Librerias utilizadas

float calcularTiempo(struct Vehiculo vehiculos[]){ // Funcion para calcular el tiempo de colision
    float tiempoColision; // Todos los datos en float
    float distanciaTotal;

    distanciaTotal = fabs(vehiculos[0].pos - vehiculos[1].pos); // Formula implementada

    tiempoColision = (distanciaTotal / fabs(vehiculos[0].vel - vehiculos[1].vel)); // Formula implementada

    return tiempoColision; // Retorno de la funcion, entrega el tiempo de colision entre los dos vehiculos
}

float calcularDistancia(struct Vehiculo vehiculos[], float tiempo){ // Funcion para calcular la distancia en un tiempo de colision
    float distanciaTotal;
    int noSeEncuentran = 0;

    if (vehiculos[0].vel < 0 && vehiculos[1].vel > 0 || vehiculos[0].vel > 0 && vehiculos[1].vel < 0){
        noSeEncuentran = 1;
    }

    if (vehiculos[0].vel == vehiculos[1].vel) {
        noSeEncuentran = 1;
    }

    if (vehiculos[0].pos > vehiculos[1].pos && vehiculos[0].vel > vehiculos[1].vel || vehiculos[1].pos > vehiculos[0].pos && vehiculos[1].vel > vehiculos[0].vel) {
        noSeEncuentran = 1;
    }

    distanciaTotal = vehiculos[0].pos + vehiculos[0].vel * tiempo; // Formula implementada para el calculo

    if (noSeEncuentran == 1){
        return noSeEncuentran;
    }
    else{
        return distanciaTotal;
    }
}

void pedirDatos(struct Vehiculo vehiculos[]){ // Funcion para imprimir en pantalla y pedir datos
    printf("INGRESE LA POSICION INICIAL DEL VEHICULO 1: \n"); // Pedir datos para cada vehiculo por separado
    scanf("%f", &vehiculos[0].pos);
    printf("INGRESE LA VELOCIDAD INICIAL DEL VEHICULO 1: \n");
    scanf("%f", &vehiculos[0].vel);
    printf("INGRESE LA POSICION INICIAL DEL VEHICULO 2: \n");
    scanf("%f", &vehiculos[1].pos);
    printf("INGRESE LA VELOCIDAD INICIAL DEL VEHICULO 2: \n");
    scanf("%f", &vehiculos[1].vel);
}