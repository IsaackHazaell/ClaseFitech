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

Student::Student(string _name, int _age, string _studentCode, float _finalNote) : Person (_name, _age)
{
    studentCode = _studentCode;
    finalNote = _finalNote;
}

void Person::showPerson()
{
    cout << "El nombre es: " << name << endl;
    cout << "La edad es: " << age << endl; 
} 

void Student::showStudent()
{
    cout << "Codigo del estudiante: " << studentCode << endl;
    cout << "Nota final: " << finalNote << endl;
}

int main()
{
    Student student_obj("Isaac",22,"21321432",92.6);
    
    student_obj.showPerson();
    student_obj.showStudent();

    system ("pause");
    return 0;
}