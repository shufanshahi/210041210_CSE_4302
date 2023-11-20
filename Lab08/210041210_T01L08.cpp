#include<iostream>
using namespace std;

class TwoDimensionalShape{
    public:
        void WhoAmI()
        {
            cout<<"I am a two-dimensional shape."<<endl;
        }
};

class ThreeDimensionalShape{
    public:
        void WhoAmI()
        {
            cout<<"I am a three-dimensional shape."<<endl;
        }
};

class shape:public TwoDimensionalShape,ThreeDimensionalShape{

};

class Square: public shape
{
    private:
    int side_length;

    public:
        Square(int _side_length):side_length(_side_length){}

        void area()
        {
            int theArea = side_length*side_length;
            cout<< theArea<<endl;
        }

        void perimeter()
        {
            int thePerimeter = 4*side_length;
            cout<<thePerimeter<<endl;
        }

        void WhoAmI()
        {
            string theWho= "Iam a Square ."; 
            cout<<theWho;
            TwoDimensionalShape::WhoAmI();
            
        }
};

class Circle: public shape{
    private:
        float radius;
    public:
        Circle(float _radius):radius(_radius){}
        void area()
        {
            float myArea = 3.1416*radius*radius;
            cout<<myArea<<endl;
        }
        void perimeter()
        {
            float myPerimeter = 2*3.1416*radius;
            cout<<myPerimeter<<endl;
        }
         void WhoAmI()
        {
            string theWho= "Iam a Circle ."; 
            cout<<theWho;
            TwoDimensionalShape::WhoAmI();
            
        }


};

class Rectangle:public shape
{
    private:
        int width;
        int length;
    public:
        Rectangle(int _width,int _lenght):width(_width),length(_lenght){}

        void area()
        {
            int myArea = width*length;
            cout<<myArea<<endl;
        }

        void perimeter()
        {
            int myPerimeter = 2*width*length;
            cout<<myPerimeter<<endl;
        }

        void WhoAmI()
        {
            string theWho= "Iam a Rectangle ."; 
            cout<<theWho;
            TwoDimensionalShape::WhoAmI();
        }
};

class Cube:public ThreeDimensionalShape{
    private:
        int side_lenght;
    public:
        Cube(int _side_length):side_lenght(_side_length){}
        void volume()
        {
            int myVolume = side_lenght*side_lenght*side_lenght;
            cout<<myVolume<<endl;
        }
        void suface_area()
        {
            int mySurface_area = 6*side_lenght*side_lenght;
            cout<<mySurface_area<<endl;
        }
        void WhoAmI()
        {
            string theWho= "Iam a Cube ."; 
            cout<<theWho;
            ThreeDimensionalShape::WhoAmI();
        }
};

class sphere:public ThreeDimensionalShape{
    private:
        float radius;
    public:
        sphere(float _radius):radius(_radius){}
        void volume()
        {
            float myvolume = 4 * 3.1416 * radius * radius;
            cout<<myvolume<<endl;
        }
        void suface_area()
        {
            float mysurface = (4/3) * 3.1416 * radius *radius *radius;
            cout<<mysurface<<endl;
        }
        void WhoAmI()
        {
            string theWho= "Iam a Sphere ."; 
            cout<<theWho;
            ThreeDimensionalShape::WhoAmI();
        }
};

class Cylinder:public ThreeDimensionalShape{
    private:
        float radius;
        float height;
    public:
        Cylinder(float _radius, float _height):radius(_radius),height(_height){}
        void volume()
        {
            float myvol =( 2* 3.1416 * radius * height) + (2* 3.1416 * radius *radius);
            cout<<myvol<<endl;
        }
        void surface_area()
        {
            float mysur = 3.1416 * radius * radius *height;
            cout<<mysur<<endl;
        }
        void WhoAmI()
        {
            string theWho= "Iam a Cylinder ."; 
            cout<<theWho;
            ThreeDimensionalShape::WhoAmI();
        }
};

int main()
{
    Square obj_square(4);
    obj_square.area();
    obj_square.perimeter();
    obj_square.WhoAmI();

    Circle obj_circle(3);
    obj_circle.area();
    obj_circle.perimeter();
    obj_circle.WhoAmI();

    Rectangle obj_rec(3,4);
    obj_rec.area();
    obj_rec.perimeter();
    obj_rec.WhoAmI();

    Cube obj_cude(5);
    obj_cude.suface_area();
    obj_cude.volume();
    obj_cude.WhoAmI();

    sphere obj_sphere(6);
    obj_sphere.suface_area();
    obj_sphere.volume();
    obj_sphere.WhoAmI();

    Cylinder obj_cyl(3,4);
    obj_cyl.surface_area();
    obj_cyl.volume();
    obj_cyl.WhoAmI();

}