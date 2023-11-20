#include<iostream>
using namespace std;

class Animal{
    private:
        string habitat_area;
        string sound;
        bool canFly;
        bool canSwim;
    public:
        Animal(string habitat_area, string sound, bool canFly,bool canSwim)
        {
            this->habitat_area = habitat_area;;
            this->sound = sound;
            this->canFly = canFly;
            this->canSwim = canSwim;
        }
        void set_habitat_area(string habitat_area)
        {
            this->habitat_area = habitat_area;
        }
        string get_habitat_area()
        {
            return habitat_area;
        }
        void set_sound(string sound)
        {
            this->sound = sound;
        }
        string get_sound()
        {
            return sound;
        }
        void set_canFly(bool canFly)
        {
            this->canFly = canFly;
        }
        bool get_canFly()
        {
            return canFly;
        }
        void set_canSwim(bool canSwim)
        {
            this->canSwim = canSwim;
        }
        bool get_canSwim()
        {
            return canSwim;
        }

        void vocalize()
        {
            cout<<sound;
        }


};

class cow: public Animal
{
    public:
    cow(string _habitat_area, bool _canFly, bool _canSwim):Animal(_habitat_area,"moo",_canFly,_canSwim)
    {

    }
};

class cat: public Animal
{
    public:
    cat(string _habitat_area, bool _canFly, bool _canSwim):Animal(_habitat_area,"meow",_canFly,_canSwim){}
};

class Chicken : public Animal
{
    public:
    Chicken(string _habitat_area, bool _canFly, bool _canSwim):Animal(_habitat_area,"buck buck",_canFly,_canSwim){}
};


int main()
{
    cat mycat("land",false,false);
    cow mycow("land",false,false);
    Chicken mychicken("land",true,false);

    mycat.vocalize();
    mycow.vocalize();
    mychicken.vocalize();
    
}