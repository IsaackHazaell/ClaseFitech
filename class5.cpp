#include <iostream>
#include <stdlib.h>

using namespace std;

class Dog{
    private:
        string name, breed; //Atributos
    public:
        Dog(string, string); //Constructor 
        ~Dog(); //Destructor
        void showData(); //Metodos
        void play(); //Metodos
};

Dog::Dog(string _name, string _breed)
{
    name = _name;
    breed = _breed;
}

Dog::~Dog()
{
    //Aqui no va nada
}

void Dog::showData()
{
    cout << "Nombre " << name << endl;
    cout << "Raza " << breed << endl;
}

void Dog::play()
{
    cout << "El perro " << name << " esta jugando" << endl;
}


int main()
{
    Dog dog1("Copper", "Boxer");

    dog1.showData();
    dog1.play();
    dog1.~Dog();

    system ("pause");
    return 0;
}