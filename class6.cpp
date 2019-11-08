#include <iostream>
#include <stdlib.h>

using namespace std;

class Point{
    private:
        int x,y;
    public:
        Point();
        void setPoint(int,int); //Setter - Establecer valores para nuestros atributos
        int getPointX(); //Getter - Mostrar los valores que tienen mis atributos
        int getPointY(); //Getter - Mostrar los valores que tienen mis atributos

};

Point::Point()
{

}

void Point::setPoint(int _x, int _y)
{
    x = _x;
    y = _y;
}

int Point::getPointX()
{
    return x;
}

int Point::getPointY()
{
    return y;
}

int main()
{
    Point point1;
    
    point1.setPoint(15,12);
    cout<< "El valor de el punto en X es: " <<point1.getPointX()<<endl;
    cout<< "El valor de el punto en Y es: " <<point1.getPointY()<<endl;

    system("pause");
    return 0;
}