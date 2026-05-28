#include <iostream>
#include <string>

class Vehiculo {
private: //Atributos con modificador de acceso privado
    float posicion; //Atributo 1
    float velocidad; //Atributo 2

public: //Metodos con modificador de acceso publico
    Vehiculo (); //Metodo constructor por defecto
    
    void pedirDatos(); //Metodo para pedir datos al usuario
    void calcularEncuentroYMostrar(const Vehiculo& vehiculo, const std::string& unidad) const;
    //Metodo para calcular el encuentro y mostrar el resultado
    //se declara como const porque no modifica el estado del objeto actual, y recibe otro objeto Vehiculo y una unidad de medida como parámetros
};