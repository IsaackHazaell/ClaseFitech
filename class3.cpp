#include <iostream>
#include <stdlib.h>

using namespace std;

class Date //Clase Date
{
    private:
        int day, month, year; //Atributos 11/10/2019 ----- 11102019
    public: //Metodos
        Date(int,int,int); //Constructor
        Date(long);
        void show();
};

Date::Date(int _day, int _month, int _year) //Constructor
{
    day = _day;
    month = _month;
    year = _year;
}

// Date::Date(long date)
// {
//     year = int(date/10000);
//     month = int((date-year*10000)/100);
//     day = int(date-year*10000-month*100);  
// }

Date::Date(long date)
{
    day = int(date/1000000);
    month = int((date-day*1000000)/10000);
    year = int(date-(day*1000000)-(month*10000));
}

void Date::show() //Metodo show de la clase Date
{
    cout << "La fecha es: " << day <<"/"<< month <<"/"<< year << endl;
}

int main()
{
    Date today(11,10,2019); //today es el objeto de la clase Date
    Date today2(11102019);

    today.show();
    today2.show();

    system ("pause");
    return 0;
}