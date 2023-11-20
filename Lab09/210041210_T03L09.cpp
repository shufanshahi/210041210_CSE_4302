// Now you want to add an attribute called color for each type of
// the shapes. Take necessary actions so that an attribute color
// can be added for each shape object. Modify the shapeDetails
// function so that color is also displayed with shapeDetails
// function.

#include<iostream>
#include<math.h>
using namespace std;

class TwoDimensionalShape{
    private:

    public:
        virtual void shapeDetails()
        {

        }


};

class Triangle:public TwoDimensionalShape
{
    private:
        int numberOfSides;
        float side1;
        float side2;
        float side3;
        string color;
    public:
        Triangle(float side1,float side2,float side3,int numberOfSides,string color)
        {
            this->side1 = side1;
            this->side2 = side2;
            this->side3 = side3;
            this->numberOfSides = numberOfSides;
            this->color = color;
        }
        void shapeDetails()
        {
            cout<<"Number of sides: "<<numberOfSides<<endl;
            cout<<"Type: "<<"Triangle"<<endl;
            cout<<"Area: ";
            float myPerimeter = (side1+side2+side3)/2;
            float myArea = sqrt(myPerimeter*(myPerimeter-side1)*(myPerimeter-side2)*(myPerimeter-side3));
            cout<<myArea<<endl;
            cout<<"Perimeter = "<<myPerimeter*2<<endl;
            cout<<"Color: "<<color<<endl;
        }
};

class Rectangle:public TwoDimensionalShape
{
    private:
        int numberOfSides;
        float length;
        float width;
        string color;
    public:
        Rectangle(float length,float width,int numberOfSides,string color)
        {
            this->length = length;
            this->width = width;
            this->numberOfSides = numberOfSides;
            this->color = color;
        }
        void shapeDetails()
        {
            float myPerimeter = 2*(length+width);
            float myArea = length*width;

            cout<<"Number of sides: "<<numberOfSides<<endl;
            cout<<"Type: "<<"Rectangle"<<endl;
            cout<<"Area: "<<myArea<<endl;
            cout<<"Perimeter: "<<myPerimeter<<endl;
            cout<<"Color: "<<color<<endl;

            
        }
};

class Square:public TwoDimensionalShape
{
    private:
        float side;
        int numberOfSides;
        string color;
    public:
        Square(float side,int numberOfSides,string color)
        {
            this->side =side;
            this->numberOfSides = numberOfSides;
            this->color = color;
        }
        void shapeDetails()
        {
            float myPerimeter = 4*side;
            float myArea = side*side;
            cout<<"Number of sides: "<<numberOfSides<<endl;
            cout<<"Type: "<<"Rectangle"<<endl;
            cout<<"Area: "<<myArea<<endl;
            cout<<"Perimeter: "<<myPerimeter<<endl;
            cout<<"Color: "<<color<<endl;
        }
};

class Hexagon:public TwoDimensionalShape
{
    private:
        int numberOfSides;
        float side;
        string color;
    public:
        Hexagon(float side,int numberOfSides,string color)
        {
            this->side = side;
            this->numberOfSides = numberOfSides;
            this->color = color;
        }
        void shapeDetails()
        {
            float myPerimeter = 6*side;
            float myArea = (3*sqrt(3)*side*side)/2;
            cout<<"Number of sides: "<<numberOfSides<<endl;
            cout<<"Type: "<<"Rectangle"<<endl;
            cout<<"Area: "<<myArea<<endl;
            cout<<"Perimeter: "<<myPerimeter<<endl;
            cout<<"Color: "<<color<<endl;
        }
};

int main()
{
    Triangle tri_obj1(3,4,5,3,"red"),tri_obj2(5,12,13,3,"blue");
    Rectangle rec_obj1(1,2,4,"green"),rec_obj2(2,4,4,"yellow");
    Square sq_obj1(2,4,"purple"),sq_obj2(4,4,"cyan");
    Hexagon hex_obj1(1,6,"beige"),hex_obj2(2,6,"black");

    TwoDimensionalShape* twoD[8];

    twoD[0] = &tri_obj1;
    twoD[1] = &tri_obj2;
    twoD[2] = &rec_obj1;
    twoD[3] = &rec_obj2;
    twoD[4] = &sq_obj1;
    twoD[5] = &sq_obj2;
    twoD[6] = &hex_obj1;
    twoD[7] = &hex_obj2;

    for(int i=0;i<8;i++)
        {twoD[i]->shapeDetails(); cout<<endl;}

   
}