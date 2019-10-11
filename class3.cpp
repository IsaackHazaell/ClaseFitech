#include <iostream>
#include <stdlib.h>

using namespace std;

class Date //Clase Date
{
    private:
        int day, month, year; //Atributos
    public: //Metodos
        Date(int,int,int); //Constructor
        void show();
};

Date::Date(int _day, int _month, int _year) //Constructor
{
    day = _day;
    month = _month;
    year = _year;
}

void Date::show() //Metodo show de la clase Date
{
    cout << "La fecha es: " << day <<"/"<< month <<"/"<< year << endl;
}

int main()
{
    Date today(11,10,2019); //today es el objeto de la clase Date

    today.show();

    system ("pause");
    return 0;
}