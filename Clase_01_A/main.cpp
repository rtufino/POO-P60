/**
 * Clase 01 - A
 * Definición básica de una clase
 * Autor: Rodrigo Tufiño <rtufino@ups.edu.ec>
 * Fecha: 17-03-2022
 */
#include <iostream>

using namespace std;

/**
 * Definción de la clase
 * Declaración de los miembros de la clase (atributos y métodos)
 */
class Circulo{
public:
    double radio;
    double getArea() const;
    double getPerimetro() const;
};

/**
 * Implementación de la clase
 * Definición del cuerpo de cada función declarada en la clase
 */
// Definición de la función miembro getArea
double Circulo::getArea() const{
    const double PI = 3.1416;
    return (PI * radio * radio);
}
// Definción de la función miembro getPerimetro
double Circulo::getPerimetro() const{
    const double PI = 3.1416;
    return (2 * PI * radio);
}

/**
 * Aplicación
 * Instanciación de objetos.
 * Los objetos utilizan sus métodos para cambiar sus artibutos o modelar
 * su comportamiento
 */

int main()
{
    // Creando un objeto (instanciando)
    Circulo circulo1;
    // Estableciendo un valor a su atributo
    circulo1.radio = 10.0;
    // Aplicando sus funciones miembros
    cout << "Circulo 1:" << endl;
    cout << "Radio = ";
    cout << circulo1.radio << endl;
    cout << "Área = ";
    cout << circulo1.getArea() << endl;
    cout << "Perímetro = ";
    cout << circulo1.getPerimetro() << endl;

    // Instanciando otro objeto
    Circulo circulo2;
    circulo2.radio = 15;
    cout << "Circulo 2:" << endl;
    cout << "Radio = ";
    cout << circulo2.radio << endl;
    cout << "Área = ";
    cout << circulo2.getArea() << endl;
    cout << "Perímetro = ";
    cout << circulo2.getPerimetro() << endl;
    return 0;
}
