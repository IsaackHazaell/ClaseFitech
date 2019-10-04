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
        Rectangulo(float,float); //Constructor
        void perimetro();
        void area();
}

//Constructor
Rectangulo::Rectangulo(float opc_largo, float opc_ancho)
{
    largo = opc_largo;
    ancho = opc_ancho;
}

//Metodos
void Rectangulo::perimetro()
{
    float opc_perimetro;

    opc_perimetro = (2*largo) + (2*ancho);

    cout << "El perimetro es: " << opc_perimetro << endl;
}

int main()
{
    
    return 0;
}