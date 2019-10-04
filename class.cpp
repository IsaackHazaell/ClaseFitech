#include <iostream>
#include <stdlib.h>


using namespace std;

class Rectangulo
{
    //Atributos
    private: 
       float largo, ancho;
    //Metodos
    public:
        Rectangulo(float,float); //Constructor
        void perimetro();
        void area();
};

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

void Rectangulo::area()
{
    float opc_area;

    opc_area = largo * ancho;

    cout << "El area es: " << opc_area << endl; 
}

int main()
{
    //Instanciar clase o crear objeto
    Rectangulo rec(5,6);

    //Objeto mandando llamar el metodo de la clase
    rec.perimetro();
    rec.area();
    
    system("pause");
    return 0;
}