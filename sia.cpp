#include <iostream>
using namespace std;
class Persona
{
  public:
        string nombre;
        int edad;
        Persona (string, int);  //constructor de la clase Persona
        ~Persona();  //destructor
        virtual void mostrar();
};

Persona::Persona (string _nombre, int _edad)
{
    nombre = _nombre;
    edad = _edad;
}

void Persona::mostrar()
{
    cout<<"Nombre: "<<nombre;
    cout<<"Edad: "<<edad;
};




main()
{
    
}
