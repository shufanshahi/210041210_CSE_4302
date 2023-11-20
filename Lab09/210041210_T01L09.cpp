#include<iostream>
using namespace std;

class TwoDimensionalShape{
    private:

    public:


};

class Triangle:public TwoDimensionalShape
{
    private:
        int numberOfSides;
        int side1;
        int side2;
        int side3;
    public:
        Triangle(int side1,int side2,int side3,int numberOfSides)
        {
            this->side1 = side1;
            this->side2 = side2;
            this->side3 = side3;
            this->numberOfSides = numberOfSides;
        }
};

class Rectangle:public TwoDimensionalShape
{
    private:
        int numberOfSides;
        int length;
        int width;
    public:
        Rectangle(int length,int width,int numberOfSides)
        {
            this->length = length;
            this->width = width;
            this->numberOfSides = numberOfSides;
        }
};

class Square:public TwoDimensionalShape
{
    private:
        int side;
        int numberOfSides;
    public:
        Square(int side,int numberOfSides)
        {
            this->side =side;
            this->numberOfSides = numberOfSides;
        }
};

class Hexagon:public TwoDimensionalShape
{
    private:
        int numberOfSides;
        int side;
    public:
        Hexagon(int side,int numberOfSides)
        {
            this->side = side;
            this->numberOfSides = numberOfSides;
        }
};

int main()
{
    Triangle tri_obj1(3,4,5,3),tri_obj2(5,12,13,3);
    Rectangle rec_obj1(1,2,4),rec_obj2(2,4,4);
    Square sq_obj1(2,4),sq_obj2(4,4);
    Hexagon hex_obj1(1,6),hex_obj2(2,6);

    TwoDimensionalShape* twoD[8];

    twoD[0] = &tri_obj1;
    twoD[1] = &tri_obj2;
    twoD[2] = &rec_obj1;
    twoD[3] = &rec_obj2;
    twoD[4] = &sq_obj1;
    twoD[5] = &sq_obj2;
    twoD[6] = &hex_obj1;
    twoD[7] = &hex_obj2;
}