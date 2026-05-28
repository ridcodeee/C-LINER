#include <iostream>
#include "funciones.h"

int main() {
    Vehiculo vehiculo1, vehiculo2; // Creación de dos objetos de la clase Vehiculo
    int opcion;
    std::string unidad;
    
    std::cout <<"::::::::::::::::::::::::::::::::::::"<<std::endl;
    std::cout <<"::::::::BIENVENID@ A C-LINER::::::::"<<std::endl;
    std::cout <<"::::::::::::::::::::::::::::::::::::"<<std::endl;
    std::cout <<"::::::::::::::::MENU::::::::::::::::"<<std::endl;
    std::cout <<"UNIDADES DE MEDIDA DE AMBOS VEHICULOS"<<std::endl;
    std::cout <<"1- Km/s\n2- m/s\n3- millas/s\n4- Cerrar"<<std::endl;

    do {
        std::cout <<"SELECCIONE UNA OPCION (1-4): ";
        std::cin >> opcion;

        switch (opcion) {
            case 1:
                unidad = "Kilometros";
                vehiculo1.pedirDatos(); // Pedir datos para el primer vehículo
                std::cout << "INGRESE LOS DATOS DEL SEGUNDO VEHICULO" << std::endl;
                vehiculo2.pedirDatos(); // Pedir datos para el segundo vehículo

                vehiculo1.calcularEncuentroYMostrar(vehiculo2, unidad); // Calcular y mostrar el encuentro de los vehículos
                break;
            case 2:
                unidad = "metros";
                vehiculo1.pedirDatos(); // Se repite lo anterior
                std::cout << "->INGRESE LOS DATOS DEL SEGUNDO VEHICULO" << std::endl;
                vehiculo2.pedirDatos(); 

                vehiculo1.calcularEncuentroYMostrar(vehiculo2, unidad); 
                break;
            case 3:
                unidad = "millas";
                vehiculo1.pedirDatos(); // Se repite lo anterior
                std::cout << "->INGRESE LOS DATOS DEL SEGUNDO VEHICULO" << std::endl;
                vehiculo2.pedirDatos(); 

                vehiculo1.calcularEncuentroYMostrar(vehiculo2, unidad); 
                break;
            case 4:
                break;
            default:
                std::cout <<"OPCION NO VALIDA, INGRESE NUEVAMENTE UNA OPCION (1-4)" << std::endl;
                continue; // Volver a pedir la opción
        }
    } while (opcion != 4);

    std::cout << "::::::::::::::::::::::::::::::::::::" << std::endl;
    std::cout << ":::::GRACIAS POR PROBAR C-LINER:::::" << std::endl;
    std::cout << "::::::::::::::::::::::::::::::::::::" << std::endl;
}