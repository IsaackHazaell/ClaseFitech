#include <iostream>
#include <stdlib.h>

using namespace std;

class Person
{
    //Encapsulamiento
    private: //Atributos
        int age;
        string name;
    public: //Metodos o funcion
        Person(int, string); //Constructor
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

void Person::eat()
{
    cout << "Mi nombre es " << name << " tengo "<< age <<" años y me gusta comer sushi" <<endl;
}

void Person::run()
{
    cout << "Mi amigos me dicen " << name << " y corro un maraton de 10km" << endl;
}

int main()
{
    Person a = Person(22,"Juanito");
    a.read();
    a.eat();
    a.run();

    system ("pause");
    return 0;
}