#include<iostream>
#include<string>
#include<math.h>
using namespace std;

class Rectangle{
    private:
        float length;
        float width;
    public:
        Rectangle(float length=1.0,float width=1.0)
        {
            this->length=length;
            this->width=width;
        }

        float calculatePerimeter()
        {
            return (2*(length+width));
        }

        void calculateDiagonal()
        {
            float diagonal=sqrt((length*length)+(width*width));
            cout<<"Diagonal :"<<diagonal<<endl;
        }

        void setDimensions(float newLength,float newwidth)
        {
            if(newLength>=1.0 && newLength<20.0)
            {   
                if(newwidth>=1.0 && newwidth<20.0)
                {
                     length=newLength;
                    width=newwidth;
                }
               
            }
        }
        void calculateAngleLength()
        {
            float x = width/length;
            cout<<"angle: "<<atan(x)<<endl;;
        }
        pair<float,float> getDimensions()
        {
            pair<float,float>p;
            p={length,width};
            return (p);
        }


};

int main()
{
    Rectangle obj1(10,5);
    cout<<"Perimeter :"<<obj1.calculatePerimeter()<<endl;
    obj1.calculateDiagonal();
    obj1.calculateAngleLength();
    obj1.setDimensions(2,5);
    float first=obj1.getDimensions().first;
    float second=obj1.getDimensions().second;
    cout<<first<<" "<<second;

    

}