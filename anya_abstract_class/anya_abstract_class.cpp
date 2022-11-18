#include<iostream>
#include<cmath>
using namespace std;

class Figure
{
public:
    virtual double getSquare() = 0;
    virtual double getPerimeter() = 0;
    virtual void showFigureType() = 0;
};

class Rectangle : public Figure
{
 
private:
    double width;
    double height;

public:
    Rectangle(double w, double h) : width(w), height(h){}

    double getSquare() override
    {
        return (width * height);
    }
    double getPerimeter() override
    {
        return (width * 2 + height * 2);
    }
    void showFigureType()
    {
        cout << "Rectangle "<< "width = " << width << "height = "<< height << endl;
        cout << "perimetr = " << getPerimeter() << endl;
        cout << "space = " << getSquare() << endl;
    }
    void get_size()
    {
        cout << "vvedite storony pruamoug" << endl;
        cin >> width >> height;
    }
};
class Circle : public Figure
{

private:
    double radius;

public:

    Circle(double r) : radius(r) {}

    double getSquare() override
    {
        return (pow(radius, 2) * 3.14);
    }
    double getPerimeter() override
    {
        return (2 * 3.14 * radius);
    }
    void showFigureType()
    {
        cout << "Circle " << "radius = " << radius << endl;
        cout << "perimetr = " << getPerimeter() << endl;
        cout << "space = " << getSquare() << endl;

    }
    void get_size()
    {
        cout << "vvedite rad cryga" << endl;
        cin >> radius;
    }


};
class Triangle : public Figure
{
private:
    double a;
    double b;
    double c;
public:
    Triangle (double a,double b,double c) : a(a), b(b), c(c){}
    double getSquare() override
    {
        return (sqrt((getPerimeter() / 2) * (getPerimeter() / 2 - a) * (getPerimeter() / 2 - b) * (getPerimeter() / 2 - c)));
    }
    double getPerimeter() override
    {
        return (a + b + c);
    }
    void showFigureType()
    {
        cout << "TRiangle " << "a, b, c = " << a << "," << b << "," << c << endl;
        cout << "perimetr = " << getPerimeter() << endl;
        cout << "space = " << getSquare() << endl;
    }
    void get_size()
    {
        cout << "vvedite storony treyg" << endl;
        cin >> a >> b >> c;
    }

};

int main()
{
    double r, a, b;
    
    Rectangle pram(1,1);
    Circle kryg(1);
    Triangle tri(1,1,1);

    pram.get_size();
    kryg.get_size();
    tri.get_size();
    pram.showFigureType();
    kryg.showFigureType();
    tri.showFigureType();
    return 0;
}