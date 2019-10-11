#include <iostream>
#include <stdlib.h>

using namespace std;

class Person
{
    //Encapsulamiento
    private: //Atributos
        int age;
        string name;
    public: //Metodos
        Person(int, string);
        void read();
        void eat();
        void run();
};

Person::Person(int _age, string _name)
{
    age = _age;
    name = _name;
}

void Person::read()
{
    cout << "Hola soy " << name << " y estoy leyendo un libro" << endl;
}

int main()
{

}