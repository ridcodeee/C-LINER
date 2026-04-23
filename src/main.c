#include<stdio.h>
#include<math.h>
#include"funciones.h"
// Librerias utilizadas

#define MAX_VEHICULOS 2 // Definir la cantidad maxima de vehiculos que habra en lista vehiculos

// Main principal donde se define el menu y se llaman funciones
int main(){
    struct Vehiculo listaVehiculos[MAX_VEHICULOS]; // se declara una lista de la estructura Vehiculo
    int opcion;
    float tiempo, distancia;
    
    // Definicion del  menu
    printf("::::::::::::::::::::::::::::::::::::\n");
    printf("::::::::BIENVENID@ A C-LINER::::::::\n");
    printf("::::::::::::::::::::::::::::::::::::\n");
    printf("::::::::::::::::MENU::::::::::::::::\n");
    printf("UNIDADES DE MEDIDA DE AMBOS VEHICULOS\n");
    printf("1- Km/s\n2- m/s\n3- millas/s\n4- Cerrar\n");

    do{ // Mediante un while se verifica la opcion elegida por el usuario

    printf("\nSELECCIONE UNA OPCION (1-4): \n");
    scanf("%d", &opcion);

    switch (opcion) {
        case 1:
            pedirDatos(listaVehiculos);
            tiempo = calcularTiempo(listaVehiculos);
            distancia = calcularDistancia(listaVehiculos, tiempo);

            if (distancia == 1){
                printf("->Ambos vehiculos nunca se encontraran\n");
                break;
            }
            else{
                printf("-> La distancia en que se encontraran ambos vehiculos es en: %f", distancia);
                printf(" Kilometros");
                printf("\n");
                printf("-> El tiempo en que se encontraran ambos vehiculos es en: %f", tiempo);
                printf(" segundos");
            break;
            }
        
        case 2:
            pedirDatos(listaVehiculos);
            tiempo = calcularTiempo(listaVehiculos);
            distancia = calcularDistancia(listaVehiculos, tiempo);

            if (distancia == 1){
                printf("->Ambos vehiculos nunca se encontraran\n");
                break;
            }
            else{
                printf("-> La distancia en que se encontraran ambos vehiculos es en: %f", distancia);
                printf(" Metros");
                printf("\n");
                printf("-> El tiempo en que se encontraran ambos vehiculos es en: %f", tiempo);
                printf(" segundos");
            break;
            }

        case 3:
            pedirDatos(listaVehiculos);
            tiempo = calcularTiempo(listaVehiculos);
            distancia = calcularDistancia(listaVehiculos, tiempo);

            if (distancia == 1){
                printf("->Ambos vehiculos nunca se encontraran\n");
                break;
            }
            else{
                printf("-> La distancia en que se encontraran ambos vehiculos es en: %f", distancia);
                printf(" Millas");
                printf("\n");
                printf("-> El tiempo en que se encontraran ambos vehiculos es en: %f", tiempo);
                printf(" segundos");
                break;
            }

        case 4:
            break;

        default:
            printf("OPCION NO VALIDA, INGRESE NUEVAMENTE UNA OPCION (1-4)\n");
            break;
        }
    }while(opcion != 4);

    printf("::::::::::::::::::::::::::::::::::::\n");
    printf(":::::GRACIAS POR PROBAR C-LINER:::::\n");
    printf("::::::::::::::::::::::::::::::::::::\n");

    return 0;
}