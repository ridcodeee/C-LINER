#include <iostream>
#include "funciones.h"
#include <cmath>

// Constructor por defecto que inicializa la posición y velocidad a 0 en float evidentemente
Vehiculo::Vehiculo() : posicion(0), velocidad(0) {}

void Vehiculo::pedirDatos() { // Funcion para pedir datos al usuario 
    std::cout << "INGRESE LA POSICION INICIAL DEL VEHICULO: ";
    std::cin >> posicion;
    std::cout << "INGRESE LA VELOCIDAD INICIAL DEL VEHICULO: ";
    std::cin >> velocidad;
}

void Vehiculo::calcularEncuentroYMostrar(const Vehiculo& vehiculo2, const std::string& unidad) const {
    int noSeEncuentran = 0; // Variable que verifica si los vehículos no se encuentran
    if ((this->velocidad < 0 && vehiculo2.velocidad > 0) || (this->velocidad > 0 && vehiculo2.velocidad < 0)) {
        noSeEncuentran = 1; // Si los vehículos se mueven en direcciones opuestas, no se encuentran
    }
    if (this->velocidad == vehiculo2.velocidad) {
        noSeEncuentran = 1; // Si los vehículos tienen la misma velocidad, no se encuentran
    }
    if ((this->velocidad > vehiculo2.velocidad && this->posicion > vehiculo2.posicion) || (this->velocidad < vehiculo2.velocidad && this->posicion < vehiculo2.posicion)) {
        noSeEncuentran = 1; // Si un vehículo es más rápido pero está detrás del otro, no se encuentran
    }

    if (noSeEncuentran == 1) {
        std::cout <<"->Ambos vehiculos nunca se encontraran" << std::endl;
    }
    else{
        // Calculo en donde se encuentran los vehiculos usando la formula de movimiento rectilíneo uniforme (MRU)
        float tiempoColision = std::abs(this->posicion - vehiculo2.posicion) / std::abs(this->velocidad - vehiculo2.velocidad); 
        // Calculo de la distancia en que se encontraran los vehiculos usando la formula de movimiento rectilíneo uniforme (MRU)
        float distanciaTotal = this->posicion + this->velocidad * tiempoColision; 

        std::cout << "-> La distancia en que se encontraran ambos vehiculos es en: " << distanciaTotal << " " << unidad << std::endl;
        std::cout << "-> El tiempo en que se encontraran ambos vehiculos es en: " << tiempoColision << " segundos" << std::endl;
    }
}


