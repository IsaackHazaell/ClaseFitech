//Herencia en POO - Programación Orientada a Objetos

#include <iostream>
#include <stdlib.h>

using namespace std;

class Person //Clase Padre
{
    private: //Atributos
        string name;
        int age;
    public: //Metodos
        Person(string, int);
        void showPerson();
};

class Student : public Person//Clase Hij@
{
    private:
        string studentCode;
        float finalNote;
    public:
        Student(string, int, string, float);
        void showStudent();
};

Person::Person(string _name, int _age)
{
    name = _name;
    age = _age;
}

void Person::showPerson()
{
    cout << "El nombre es: " << name << endl;
    cout << "La edad es: " << age << endl; 
} 


int main()
{
    

    system ("pause");
    return 0;
}