#include<iostream>
using namespace std;

class Weight
{
    private:
        const double kgToPound=2.20462;
        int pound;
        double ounce;
    public:
        Weight()
        {

        }
        
        Weight(double kg)
        {
            pound=kg*kgToPound;
            // int temp = pound;
            ounce=(kg*kgToPound*16);
        }
        Weight(int pound, double ounce)
        {
            this->pound=pound;
            this->ounce=ounce;
        }
        void showWeight()
        {
            cout<<"The weight is: ";
            cout<<pound<<" pound and "<<ounce<<" ounce"<<endl;
        }
        
        operator double()
        {
            // int kg= pound/kgToPound;
            int kg=0;
            kg+= static_cast<int> (pound/kgToPound);
            return kg;
        }


};

int main()
{
    Weight obj1(14400);
    obj1.showWeight();
    cout<<obj1.operator double();
    
}