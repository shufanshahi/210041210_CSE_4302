#include<iostream>
#include<string>
using namespace std;

class Flight
{
    private:
        int flightNumber;
        string destination;
        float distance;
        float maxFuelCapacity;
    public:
        Flight(int flightNum=0,string dest="",float dist=0.0,float maxFuel=0.0)
        {
            flightNumber=flightNum;
            destination=dest;
            distance=dist;
            maxFuelCapacity=maxFuel;
        }
        ~Flight()
        {
            cout<<"The destructor is called for flight number: "<<flightNumber<<endl;
        }
        int calFuel()
        {
            if(distance<=1000)
            return 500;
            else if(distance>1000 && distance<=2000)
            return 1100;
            else
            return 2200;
        }
        void showInfo()
        {
            cout<<"Flight Number :"<<flightNumber<<endl;
            cout<<"Destination :"<<destination<<endl;
            cout<<"Distance :"<<distance<<endl;
            cout<<"Max fuel capacity :"<<maxFuelCapacity<<endl;
            int needFuel=calFuel();
            if(needFuel<=maxFuelCapacity)
            cout<<"It's fit for the flight"<<endl;
            else
            cout<<"It's not fit for the flight"<<endl;
        }


};

int main()
{
    Flight obj1(210041210,"Malyesia",10000,500);
    obj1.showInfo();

}