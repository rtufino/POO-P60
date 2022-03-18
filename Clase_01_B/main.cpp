/**
 * Clase 01 - B
 * Utilización de constructores y destructores
 * Autor: Rodrigo Tufiño <rtufino@ups.edu.ec>
 * Fecha: 18-03-2022
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
    Circulo();
    Circulo(double radio);
    Circulo(const Circulo& circulo);
    ~Circulo();
};

/**
 * Implementación de funciones miembro
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
// Definición del constructor por defecto
Circulo::Circulo():radio(0){
    cout << "Constructor por defecto" << endl;
}
// Definición del constructor con parámetro
Circulo::Circulo(double r):radio(r){
   cout << "Constructor parametrizado" << endl;
}
// Definición de un constructor de copia
Circulo::Circulo(const Circulo& cr): radio(cr.radio){
    cout << "Constructor por copia" << endl;
}
// Definición del destructor
Circulo::~Circulo()
{
    cout << "Circulo (r=" << radio << ") ";
    cout << "destruido " << endl;
}

/**
 * Aplicación
 * Instanciación de objetos.
 * Los objetos utilizan sus métodos para cambiar sus artibutos o modelar
 * su comportamiento
 */

int main()
{
    // Creando un objeto (constructor por defecto)
    Circulo circulo1;
    cout << "Radio = ";
    cout << circulo1.radio << endl;
    cout << "Área = ";
    cout << circulo1.getArea() << endl;
    cout << "Perímetro = ";
    cout << circulo1.getPerimetro() << endl << endl;

    // Creando un objeto (constructor con parámetro)
    Circulo circulo2(15);
    cout << "Radio = ";
    cout << circulo2.radio << endl;
    cout << "Área = ";
    cout << circulo2.getArea() << endl;
    cout << "Perímetro = ";
    cout << circulo2.getPerimetro() << endl << endl;

    // Creando un objeto (copia otro objeto)
    Circulo circulo3(circulo2);
    cout << "Radio = ";
    cout << circulo3.radio << endl;
    cout << "Área = ";
    cout << circulo3.getArea() << endl;
    cout << "Perímetro = ";
    cout << circulo3.getPerimetro() << endl;
    return 0;
}
