#include <iostream>
#include <stdio>

using namespace std;

class Rectangulo()
{
    //Atributos
    private: 
       float largo, ancho;
    //Metodos
    public:
        void perimetro();
        void area();
}

Rectangulo::Rectangulo(float opc_largo, float opc_ancho)
{
    largo = opc_largo;
    ancho = opc_ancho;
}

int main()
{
    
    return 0;
}